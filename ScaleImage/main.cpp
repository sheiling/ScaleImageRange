
#include "ScaleImage.h"

int main()
{
	cv::Mat image = cv::imread("", cv::IMREAD_GRAYSCALE);
	if (image.empty())
		return -1;

	// ��ͼ��ĻҶȽ�������
	ScaleImage::ScaleRange(image, 30, 100, 0, 255);

	return -1;
}