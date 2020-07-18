FROM golang:alpine AS stage1

RUN sed -i 's/http:\/\/dl-cdn.alpinelinux.org/https:\/\/mirrors.aliyun.com/g' /etc/apk/repositories && \
  apk add --no-cache git && \
  env GOPROXY="https://goproxy.cn,direct" go get -u -v github.com/go-bindata/go-bindata/...

FROM node:alpine AS stage2

COPY --from=stage1 /go/bin/go-bindata /usr/bin

WORKDIR /go/src/app

ADD . .

RUN cd apps/web && env SASS_BINARY_SITE=https://npm.taobao.org/mirrors/node-sass \
  npm install --registry https://registry.npm.taobao.org && \
  npm run build

FROM golang:alpine AS stage3

WORKDIR /go/src/app

ADD . .

COPY --from=stage2 /go/src/app/apps/server/cmd/server/bindata.go apps/server/cmd/server

RUN sed -i 's/http:\/\/dl-cdn.alpinelinux.org/https:\/\/mirrors.aliyun.com/g' /etc/apk/repositories && \
  apk add --no-cache gcc make musl-dev git && \
  cd apps/server && \
  make release && \
  cp release/6leetcode /tmp && \
  cp config.yml /tmp

FROM alpine:edge

ADD apps/server/wait-for-it.sh /usr/local/bin

RUN sed -i 's/https:\/\/dl-cdn.alpinelinux.org/https:\/\/mirrors.aliyun.com/g' /etc/apk/repositories && \
  apk add --no-cache ca-certificates bash wget && \
  mkdir -p /etc/6leetcode

COPY --from=stage3 /tmp/6leetcode /usr/bin
COPY --from=stage3 /tmp/config.yml /etc/6leetcode

VOLUME /etc/6leetcode

EXPOSE 4000

CMD ["wait-for-it.sh", "postgresql-master:5432", "--", "6leetcode", "server"]
