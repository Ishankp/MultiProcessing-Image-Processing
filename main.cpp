#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

int main() {
    // Load the image
    cv::Mat image = cv::imread("image.jpg");

    // Check if the image is loaded
    if (image.empty()) {
        std::cout << "Could not open or find the image" << std::endl;
        return -1;
    }

    // Save the image to a new file (this can be downloaded)
    cv::imwrite("output_image.jpg", image);
    std::cout << "Image saved as output_image.jpg" << std::endl;

    return 0;
}
