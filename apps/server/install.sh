#!/usr/bin/env bash

echo_command_not_found()
{
  echo command "$@" not found
  exit 1
}

if ! command -v docker &> /dev/null; then
  echo_command_not_found docker
fi

if ! command -v docker-compose &> /dev/null; then
  echo_command_not_found docker-compose
fi

if ! docker network ls | grep -q webproxy; then
  docker network create webproxy
fi

if [ ! -d data ]; then
  mkdir data
fi

pushd data || exit 1

if [ ! -d traefik ]; then
  mkdir traefik
fi

if [ ! -f traefik ]; then
  touch traefik/acme.json
  chmod 600 traefik/acme.json
fi

if [ ! -d postgresql-master ]; then
  mkdir postgresql-master
  sudo chown -R 1001:1001 postgresql-master
fi

if [ ! -d postgresql-slave ]; then
  mkdir postgresql-slave
  sudo chown -R 1001:1001 postgresql-slave
fi

popd || exit 1

docker-compose up --no-build --force-recreate -d 6leetcode
