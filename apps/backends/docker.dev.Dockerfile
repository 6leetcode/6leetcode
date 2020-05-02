FROM golang:alpine

WORKDIR /go/src/github.com/6leetcode/6leetcode

RUN sed -i 's/http:\/\/dl-cdn.alpinelinux.org/https:\/\/mirrors.tuna.tsinghua.edu.cn/g' /etc/apk/repositories && \
  apk add --no-cache bash coreutils gcc g++ libc-dev \
  ca-certificates file tree vim git fish make tzdata

RUN sed -i "s/bin\/ash/usr\/bin\/fish/" /etc/passwd

RUN rm -f /etc/localtime && ln -s /usr/share/zoneinfo/Asia/Shanghai /etc/localtime

ENV SHELL /usr/bin/fish

VOLUME [ "/go/src/github.com/6leetcode/6leetcode" ]

EXPOSE 4000

CMD ["/usr/bin/fish"]
