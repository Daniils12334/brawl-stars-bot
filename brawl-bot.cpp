#include <iostream>
#include <string>
#include <random>
#include <opencv2/opencv.hpp>
#define DEBUGING
using namespace std;
using namespace cv;

int main() {
    // Print OpenCV version
    #if defined(DEBUGING)
    cout << "OpenCV version: " << CV_VERSION << "\n";
    #endif // DEBUGING
    // int a,b = 10;
    // return b = 15 ? a = 10 : a = 45;
    // Create a blank image 
    Mat image(1080, 1920, CV_8UC3, Scalar(123, 123, 200));

    // Display the image
    imshow("Test Image", image);
    waitKey(0);
    destroyAllWindows();

    return 0;
}




// void fill_array_random(int *anton, size_t size){
//     for (size_t i = 0; i < size; i++) {
//         anton[i] = rand() % 10 + 1; 
//     }
// }

// void show_array(int *anton, size_t size){
//     for (size_t i = 0; i < size; i++) {
//         cout << "Number: "<< i << '\t' << anton[i]<< "\n";
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
