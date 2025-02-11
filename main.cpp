#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // Load an image
    cv::Mat img = cv::imread("image.jpg");

    if (img.empty()) {
        std::cout << "Could not open or find the image!" << std::endl;
        return -1;
    }

    // Show the image in a window
    cv::imshow("Display window", img);
    cv::waitKey(0);

    return 0;
}
