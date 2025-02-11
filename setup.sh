#!/bin/bash

# Install vcpkg (if not already installed)
if [ ! -d "vcpkg" ]; then
    git clone https://github.com/microsoft/vcpkg.git
    ./vcpkg/bootstrap-vcpkg.sh
fi

# Install OpenCV
./vcpkg install opencv
