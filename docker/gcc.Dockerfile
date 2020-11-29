FROM gcc:10

WORKDIR /app

# RUN sed -i 's/deb.debian.org/mirrors.aliyun.com/g' /etc/apt/sources.list && \
#   sed -i 's/security.debian.org/mirrors.aliyun.com/g' /etc/apt/sources.list

RUN sed -i 's/deb.debian.org/mirrors.aliyun.com/g' /etc/apt/sources.list && \
  sed -i 's/security.debian.org/mirrors.aliyun.com/g' /etc/apt/sources.list && \
  apt-get update && apt-get upgrade -y && \
  apt-get install -y --no-install-recommends ca-certificates make && \
  apt-get clean

VOLUME /app

CMD ["/bin/bash"]
