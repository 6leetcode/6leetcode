FROM node:lts-alpine AS builder

WORKDIR /web

ADD . .

# ENV SASS_BINARY_SITE=https://npm.taobao.org/mirrors/node-sass

RUN cd apps/web && yarn install && yarn build
# RUN cd apps/web && yarn install --registry https://registry.npm.taobao.org && yarn build

FROM httpd:alpine

COPY --from=builder /web/apps/web/build /usr/local/apache2/htdocs/
