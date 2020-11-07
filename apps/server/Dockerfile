FROM golang:alpine AS stage1

# ENV GOPROXY="https://goproxy.cn,direct"
# sed -i 's/dl-cdn.alpinelinux.org/mirrors.aliyun.com/g' /etc/apk/repositories
RUN apk add --no-cache git && go get -u -v github.com/go-bindata/go-bindata/...

FROM node:14-alpine3.12 AS stage2

COPY --from=stage1 /go/bin/go-bindata /usr/bin

WORKDIR /go/src/app

ADD . .

# ENV SASS_BINARY_SITE=https://npm.taobao.org/mirrors/node-sass

RUN cd apps/web && \
  yarn install --registry https://registry.npm.taobao.org && yarn build

FROM golang:alpine AS stage3

WORKDIR /go/src/app

ADD . .

COPY --from=stage2 /go/src/app/apps/server/cmd/server/bindata.go apps/server/cmd/server

# sed -i 's/dl-cdn.alpinelinux.org/mirrors.aliyun.com/g' /etc/apk/repositories
RUN apk add --no-cache gcc make musl-dev git && \
  cd apps/server && \
  make release && \
  cp release/6leetcode /tmp && \
  cp config.yml /tmp

FROM alpine:3.12

ADD apps/server/wait-for-it.sh /usr/local/bin

# sed -i 's/dl-cdn.alpinelinux.org/mirrors.aliyun.com/g' /etc/apk/repositories
RUN apk add --no-cache ca-certificates bash wget && \
  mkdir -p /etc/6leetcode && \
  mkdir -p /data

COPY --from=stage3 /tmp/6leetcode /usr/bin
COPY --from=stage3 /tmp/config.yml /etc/6leetcode
COPY questions /questions

VOLUME /etc/6leetcode

EXPOSE 4000

CMD ["wait-for-it.sh", "postgresql-master:5432", "--", "6leetcode", "server"]
