#include <opencv.hpp>

using namespace cv;
using namespace std;
//Á·Ï°Ò»
/*int main() {
	VideoCapture cap(0);
	Mat frame;
	Mat dx;
	Mat dy;
	Mat canny_one;
	Mat canny_two;

	while (1)
	{
		cap >> frame;
		Sobel(frame, dx, CV_16SC1, 1, 0, 3);
		Sobel(frame, dy, CV_16SC1, 0, 1, 3);
		//Canny(dx, dy, canny_one, 1, 3);
		//imshow("canny1", canny_one);
		Canny(frame,canny_two,1,3);
		imshow("canny2",canny_two);

		waitKey(30);
	}
}*/

//Á·Ï°¶þ
/*int main() {
	Mat dstMat;
	Mat srcMat	= imread("E:\\dignal picture\\lena.jpg",1);
	if (srcMat.empty()) return -1;
	float angle = -10.0, scale = 1;
	Point2f center(srcMat.cols*0.5, srcMat.rows*0.5);
	Mat affine_matrix = getRotationMatrix2D(center, angle, scale);
	warpAffine(srcMat,dstMat,affine_matrix,srcMat.size());
	imshow("src", srcMat);
	imshow("dst", dstMat);
	waitKey(0);

}*/

//Á·Ï°Èý
/*int main() {
	Mat dstMat;
	Mat srcMat = imread("E:\\dignal picture\\lena.jpg", 1);
	if (srcMat.empty()) return -1;
	const Point2f src_pt[] = {
	Point2f(200,200),
	Point2f(250,200),
	Point2f(200,100)
	};
	const Point2f dst_pt[] = {
Point2f(300,100),
Point2f(300,50),
Point2f(200,100)
	};
	const Mat affine_matrix = getAffineTransform(src_pt, dst_pt);
	warpAffine(srcMat, dstMat, affine_matrix, srcMat.size());
	imshow("src", srcMat);
	imshow("dst", dstMat);
	waitKey(0);

}*/

//Á·Ï°ËÄ
int main() {
	Mat dstMat;
	Mat srcMat = imread("E:\\dignal picture\\lena.jpg", 1);
	if (srcMat.empty()) return -1;
	const Point2f pts1[] = {
	Point2f(150,150),
	Point2f(150,300),
	Point2f(350,300),
	Point2f(350,150)
	};
	const Point2f pts2[] = {
Point2f(200,150),
Point2f(200,300),
Point2f(340,270),
Point2f(340,180)
	};
	const Mat affine_matrix = getAffineTransform(pts1, pts2);
	warpAffine(srcMat, dstMat, affine_matrix, srcMat.size());
	imshow("src", srcMat);
	imshow("dst", dstMat);
	waitKey(0);


}
