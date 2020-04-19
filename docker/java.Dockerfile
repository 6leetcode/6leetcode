FROM openjdk:13-alpine

WORKDIR /app

RUN sed -i 's/http:\/\/dl-cdn.alpinelinux.org/https:\/\/mirrors.aliyun.com/g' /etc/apk/repositories && \
  apk add --no-cache ca-certificates make

VOLUME /app

CMD ["/bin/bash"]
