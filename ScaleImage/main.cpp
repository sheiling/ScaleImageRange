
#include "ScaleImage.h"

int main()
{
	cv::Mat image = cv::imread("test.bmp", cv::IMREAD_GRAYSCALE);
	if (image.empty())
		return -1;

	// ��ͼ��ĻҶȽ�������
	cv::Mat matResult = ScaleImage::ScaleRange(image, 34, 60, 0, 255);

	return -1;
}