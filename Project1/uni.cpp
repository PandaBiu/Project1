#include<opencv2/opencv.hpp>
#include<iostream>
using namespace std;

using namespace cv;
int main() {
	Mat image = imread("03072.png");
	imshow("Ha", image);
	waitKey(0);
	return 0;
	//We 've 
}