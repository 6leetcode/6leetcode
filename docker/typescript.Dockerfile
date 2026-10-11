FROM node:alpine

WORKDIR /app

# RUN sed -i 's/dl-cdn.alpinelinux.org/mirrors.aliyun.com/g' /etc/apk/repositories

RUN apk add --no-cache ca-certificates make && \
  npm install -g tsx@4

VOLUME /app

CMD ["/bin/sh"]
