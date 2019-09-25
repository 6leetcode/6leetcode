FROM gcc:8


# RUN sed -i 's/deb.debian.org/mirrors.163.com/g' /etc/apt/sources.list && \
#   sed -i 's/security.debian.org/mirrors.163.com/g' /etc/apt/sources.list

ARG TZ=Asia/Shanghai

RUN ln -snf /usr/share/zoneinfo/${TZ} /etc/localtime && echo ${TZ} > /etc/timezone

RUN apt-get update && apt-get upgrade -y && \
  apt-get install -y --no-install-recommends \
  ca-certificates vim fish tzdata locales && \
  apt-get clean

RUN echo "en_US.UTF-8 UTF-8" >> /etc/locale.gen && \
  echo "zh_CN.UTF-8 UTF-8" >> /etc/locale.gen && locale-gen

RUN sed -i "s/bin\/ash/usr\/bin\/fish/" /etc/passwd

RUN echo "set mouse-=a" >> ~/.vimrc

VOLUME /app

WORKDIR /app

ENV SHELL /usr/bin/fish

CMD ["/usr/bin/fish"]
