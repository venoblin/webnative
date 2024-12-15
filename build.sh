#!/bin/bash

if ! [ -d "build/" ]; then
  mkdir build
fi

cd build/ && cmake ../ && make

echo "Built whatsappdesktop in build directory."
