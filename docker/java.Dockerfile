FROM openjdk:13-alpine

RUN sed -i 's/http:\/\/dl-cdn.alpinelinux.org/https:\/\/mirrors.tuna.tsinghua.edu.cn/g' /etc/apk/repositories

RUN apk update && apk upgrade \
  && apk add --no-cache mdocml-apropos coreutils ca-certificates \
  vim fish tzdata make

RUN rm -f /etc/localtime && ln -s /usr/share/zoneinfo/Asia/Shanghai /etc/localtime

RUN sed -i "s/bin\/ash/usr\/bin\/fish/" /etc/passwd

RUN echo "set mouse-=a" >> ~/.vimrc

ENV SHELL /usr/bin/fish

VOLUME /app

WORKDIR /app

CMD ["/usr/bin/fish"]
