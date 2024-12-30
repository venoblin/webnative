#!/bin/bash

if [ -d "build/" ]; then
  ./build/webnative
else
  echo "Error: No build found! Run build.sh first."
fi
