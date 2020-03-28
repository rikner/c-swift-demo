#!/bin/bash

echo "build swift code"
swift build -c release

echo "build c executable"
gcc -o c-swift-demo main.c

echo "running c executable"
./c-swift-demo

echo "running python script"
python3 main.py