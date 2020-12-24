
#include "ScaleImage.h"
#include "BottomHat.h"

int main()
{
	cv::Mat image = cv::imread("RawTest.bmp", cv::IMREAD_GRAYSCALE);
	if (image.empty())
		return -1;
	
	// ��ȡͼ���еľ��
	cv::Mat rawImage;
	auto result = BottomHat::ExtrackRaws(image, rawImage);

	// ��ͼ��ĻҶȽ�������
	cv::Mat matResult = ScaleImage::ScaleRange(image, 34, 60, 0, 255);

	return -1;
}