#include <QCoreApplication>
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    printf("hello xmake\n");
    // Mat srcImage = imread("C:\\xmakeCode\\xmake-opencv-app//lianggongchunri_de_youyv-009.jpg");
    Mat srcImage = imread("../../../../lianggongchunri_de_youyv-009.jpg");
    if (!srcImage.data) {
        std::cout << "Image not loaded";
        return -1;
    }
    imshow("[img]", srcImage);
    return a.exec();
}
