#!/bin/bash

if [ -d build ]; then
  ./build/whatsappdesktop
else
  echo Error: No build found! Run build.sh first.
fi
