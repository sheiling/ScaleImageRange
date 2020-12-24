
#include "ScaleImage.h"
#include "BottomHat.h"

int main()
{
	cv::Mat image = cv::imread("RawTest.bmp", cv::IMREAD_GRAYSCALE);
	if (image.empty())
		return -1;
	
	// 提取图像中的锯齿
	cv::Mat rawImage;
	auto result = BottomHat::ExtrackRaws(image, rawImage);

	// 对图像的灰度进行拉伸
	cv::Mat matResult = ScaleImage::ScaleRange(image, 34, 60, 0, 255);

	return -1;
}