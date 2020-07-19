FROM php:alpine

WORKDIR /app

# sed -i 's/http:\/\/dl-cdn.alpinelinux.org/https:\/\/mirrors.aliyun.com/g' /etc/apk/repositories

RUN apk add --no-cache ca-certificates make

VOLUME /app

CMD ["/bin/sh"]
