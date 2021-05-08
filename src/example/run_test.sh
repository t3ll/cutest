#!/usr/bin/env sh
cc -g -I. -I.. test_example.c add.c -o test && echo `./test` && rm test
