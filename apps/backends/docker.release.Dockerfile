FROM golang:alpine AS build

WORKDIR /app

RUN sed -i 's/http:\/\/dl-cdn.alpinelinux.org/https:\/\/mirrors.tuna.tsinghua.edu.cn/g' /etc/apk/repositories && \
  apk add --no-cache --virtual .build-deps gcc make musl-dev git

ADD . /go/src/github.com/6leetcode/6leetcode

RUN cd /go/src/github.com/6leetcode/6leetcode/apps/backends \
  && make release \
  && cp ./release/6leetcode-linux /app \
  && cp config.yml /app

RUN apk del .build-deps

FROM alpine:edge AS release

WORKDIR /app

RUN sed -i 's/http:\/\/dl-cdn.alpinelinux.org/https:\/\/mirrors.tuna.tsinghua.edu.cn/g' /etc/apk/repositories && \
  apk add --no-cache ca-certificates bash

COPY --from=build /app/6leetcode-linux /usr/bin
COPY --from=build /app/config.yml /app/config.yml

EXPOSE 4000
