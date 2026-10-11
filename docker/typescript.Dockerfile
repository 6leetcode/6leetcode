FROM node:alpine

WORKDIR /app

# RUN sed -i 's/dl-cdn.alpinelinux.org/mirrors.aliyun.com/g' /etc/apk/repositories

RUN apk add --no-cache ca-certificates make && \
  npm install -g typescript@5 ts-node@10

VOLUME /app

CMD ["/bin/sh"]
