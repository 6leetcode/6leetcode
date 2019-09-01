FROM golang:alpine AS build

WORKDIR /app

RUN sed -i 's/http:\/\/dl-cdn.alpinelinux.org/https:\/\/mirrors.tuna.tsinghua.edu.cn/g' /etc/apk/repositories && \
  apk add --no-cache --virtual .build-deps gcc make musl-dev git

ADD . /go/src/github.com/tosone/zhili

RUN cd /go/src/github.com/tosone/zhili \
  && make release \
  && cp ./release/zhili-linux /app \
  && cp config.release.yml /app

RUN apk del .build-deps

FROM alpine:edge AS release

WORKDIR /app

RUN apk update && apk upgrade \
  && apk add --no-cache ca-certificates bash

COPY --from=build /app/zhili-linux /usr/bin
COPY --from=build /app/config.release.yml /app/config.yml

EXPOSE 4000
