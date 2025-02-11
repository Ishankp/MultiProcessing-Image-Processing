# Use a base image with C++ support
FROM mcr.microsoft.com/vscode/devcontainers/cpp:0-ubuntu-20.04

# Install OpenCV
RUN apt-get update && apt-get install -y \
    libopencv-dev \
    && rm -rf /var/lib/apt/lists/*
