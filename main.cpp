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

    // Create a window to display the image
    cv::imshow("Loaded Image", image);

    // Wait for a key press
    cv::waitKey(0);

    // Close all OpenCV windows
    cv::destroyAllWindows();

    return 0;
}
