FROM bash:5

WORKDIR /app

# RUN sed -i 's/dl-cdn.alpinelinux.org/mirrors.aliyun.com/g' /etc/apk/repositories

RUN apk add --no-cache ca-certificates make

VOLUME /app

CMD ["/usr/local/bin/bash"]
