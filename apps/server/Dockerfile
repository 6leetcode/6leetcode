FROM golang:alpine AS stage1

ENV GOPROXY="https://goproxy.cn,direct"
RUN sed -i 's/dl-cdn.alpinelinux.org/mirrors.aliyun.com/g' /etc/apk/repositories
RUN apk add --no-cache git && go get -u -v github.com/swaggo/swag/cmd/swag

FROM golang:alpine AS stage2

WORKDIR /go/src/app

ADD . .

COPY --from=stage1 /go/bin/swag /usr/bin

RUN sed -i 's/dl-cdn.alpinelinux.org/mirrors.aliyun.com/g' /etc/apk/repositories
RUN apk add --no-cache gcc make musl-dev git && \
  cd apps/server && \
  make release && \
  cp release/6leetcode /tmp && \
  cp config.yml /tmp

FROM alpine:3.12

RUN sed -i 's/dl-cdn.alpinelinux.org/mirrors.aliyun.com/g' /etc/apk/repositories
RUN apk add --no-cache ca-certificates bash && \
  mkdir -p /etc/6leetcode && \
  mkdir -p /data

COPY --from=stage2 /tmp/6leetcode /usr/bin
COPY --from=stage2 /tmp/config.yml /etc/6leetcode
COPY questions /questions

VOLUME /etc/6leetcode

EXPOSE 4000

CMD ["6leetcode", "server"]
