FROM bash:5

WORKDIR /app

RUN apk add --no-cache ca-certificates make

VOLUME /app

CMD ["/usr/local/bin/bash"]
