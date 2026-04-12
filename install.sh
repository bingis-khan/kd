#!/bin/sh
set -xe
kkc --backend c --dontRun kd.kkc
cc -O2 kd.c -o kd
cp kd ~/.local/bin/
