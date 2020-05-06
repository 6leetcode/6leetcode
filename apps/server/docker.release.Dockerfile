FROM golang:alpine AS build

WORKDIR /go/src/app

ADD . .

RUN sed -i 's/http:\/\/dl-cdn.alpinelinux.org/https:\/\/mirrors.aliyun.com/g' /etc/apk/repositories && \
  apk add --no-cache gcc make musl-dev git && \
  cd apps/server && \
  make release && \
  cp release/6leetcode /tmp && \
  cp config.yml /tmp

FROM alpine:edge

RUN sed -i 's/http:\/\/dl-cdn.alpinelinux.org/https:\/\/mirrors.aliyun.com/g' /etc/apk/repositories && \
  apk add --no-cache ca-certificates bash && \
  mkdir -p /etc/6leetcode

COPY --from=build /tmp/6leetcode /usr/bin
COPY --from=build /tmp/config.yml /etc/6leetcode

EXPOSE 4000

CMD ["6leetcode", "server"]
