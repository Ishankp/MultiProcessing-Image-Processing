#!/bin/bash
set -e  # Exit immediately if a command exits with a non-zero status

echo "Updating package lists..."
sudo apt update

echo "Installing OpenCV and dependencies..."
sudo apt install -y libopencv-dev

echo "Verifying OpenCV installation..."
pkg-config --modversion opencv4

echo "OpenCV installation complete!"
