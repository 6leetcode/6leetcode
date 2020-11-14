#!/usr/bin/env bash

echo_command_not_found()
{
  echo command $@ not found
  exit 1
}

if command -v docker &> /dev/null; then
  echo_command_not_found docker
fi

if command -v docker-compose &> /dev/null; then
  echo_command_not_found docker-compose
fi

if docker network ls | grep -q webproxy; then
  docker network create webproxy
fi

docker-compose up --no-build --force-recreate -d 6leetcode
