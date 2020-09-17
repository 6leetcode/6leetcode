#!/usr/bin/env bash

cat words.txt | sed 's/ /\n/g' | grep -v '^$' | sort | uniq -c | sort -nr | awk '{print $NF, $1}'
