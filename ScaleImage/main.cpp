
#include "ScaleImage.h"

int main()
{
	cv::Mat image = cv::imread("test.bmp", cv::IMREAD_GRAYSCALE);
	if (image.empty())
		return -1;

	// 对图像的灰度进行拉伸
	cv::Mat matResult = ScaleImage::ScaleRange(image, 34, 60, 0, 255);

	return -1;
}