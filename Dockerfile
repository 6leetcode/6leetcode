FROM ubuntu:disco

RUN sed -i 's/archive.ubuntu.com/mirrors.163.com/g' /etc/apt/sources.list && \
  sed -i 's/security.ubuntu.com/mirrors.163.com/g' /etc/apt/sources.list

ARG TZ=Asia/Shanghai

RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

RUN apt-get update && apt-get upgrade -y && \
  apt-get install -y --no-install-recommends \
  procps build-essential coreutils libasan5 \
  ca-certificates tree vim fish dialog tzdata locales \
  php-cli openjdk-13-jdk python3 golang-1.12 nodejs && \
  apt-get clean

RUN echo "en_US.UTF-8 UTF-8" >> /etc/locale.gen && \
  echo "zh_CN.UTF-8 UTF-8" >> /etc/locale.gen && locale-gen

RUN sed -i "s/bin\/ash/usr\/bin\/fish/" /etc/passwd

RUN echo "set mouse-=a" >> ~/.vimrc

VOLUME /app

WORKDIR /app

ENV SHELL /usr/bin/fish

CMD ["/usr/bin/fish"]
