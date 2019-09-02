FROM alpine:edge

WORKDIR /root/go/src/github.com/6leetcode/6leetcode

RUN sed -i 's/http:\/\/dl-cdn.alpinelinux.org/https:\/\/mirrors.tuna.tsinghua.edu.cn/g' /etc/apk/repositories && \
  apk add --no-cache mdocml-apropos bash coreutils gcc g++ libc-dev \
  ca-certificates autoconf automake file libtool \
  bc tree vim git fish dialog less make tzdata go

RUN sed -i "s/bin\/ash/usr\/bin\/fish/" /etc/passwd

RUN echo "set mouse-=a" >> ~/.vimrc

RUN rm -f /etc/localtime && ln -s /usr/share/zoneinfo/Asia/Shanghai /etc/localtime

ENV SHELL /usr/bin/fish

VOLUME [ "/root/go/src/github.com/6leetcode/6leetcode" ]

EXPOSE 4000

CMD ["/usr/bin/fish"]
