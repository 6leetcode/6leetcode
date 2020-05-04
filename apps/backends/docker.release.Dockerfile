FROM golang:alpine AS build

WORKDIR /go/src/github.com/6leetcode/6leetcode

ADD . .

RUN sed -i 's/http:\/\/dl-cdn.alpinelinux.org/https:\/\/mirrors.aliyun.com/g' /etc/apk/repositories && \
  apk add --no-cache --virtual .build-deps gcc make musl-dev git && \
  cd apps/backends && \
  make release  && \
  cp release/6leetcode /tmp && \
  cp config.yml /tmp

RUN apk del .build-deps

FROM alpine:edge

RUN sed -i 's/http:\/\/dl-cdn.alpinelinux.org/https:\/\/mirrors.tuna.tsinghua.edu.cn/g' /etc/apk/repositories && \
  apk add --no-cache ca-certificates bash && \
  mkdir -p /etc/6leetcode

COPY --from=build /tmp/6leetcode /usr/bin
COPY --from=build /tmp/config.yml /etc/6leetcode

EXPOSE 4000

CMD ["6leetcode-linux", "server"]