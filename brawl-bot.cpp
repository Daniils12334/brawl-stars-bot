#include <iostream>
#include <string>
#include <random>
#include <opencv2/opencv.hpp>
#define DEBUGING
using namespace std;

int main() {
    // Print OpenCV version
    #if defined(DEBUGING)
    std::cout << "OpenCV version: " << CV_VERSION << std::endl;
    #endif // DEBUGING
    
    // Create a blank image (200x200) with a red color
    cv::Mat image(1080, 1920, CV_8UC3, cv::Scalar(123, 123, 200));

    // Display the image
    cv::imshow("Test Image", image);
    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}




// void fill_array_random(int *anton, size_t size){
//     for (size_t i = 0; i < size; i++) {
//         anton[i] = rand() % 10 + 1; 
//     }
// }

// void show_array(int *anton, size_t size){
//     for (size_t i = 0; i < size; i++) {
//         cout << "Number: "<< i << '\t' << anton[i]<< endl;
//     }
//     cout << endl; 
// }

// int main(){
//     int size;
//     cout << "Hi, enter map size: ";
    
//     cin >> size;
    
//     int *arr = new int[size];
//     fill_array_random(arr, size);  
//     show_array(arr, size);
//     delete[] arr;
//     return 0;
// }
