#pragma once
#include "opencv2/opencv.hpp"


class GaussianAnisotropicEdge
{
private:
	GaussianAnisotropicEdge(){}

public:
	static cv::Mat GaussianNoneAnisotriopic(const cv::Mat& image,cv::Size kernel,float sigma)
	{
		cv::Mat matFilter;
		if (image.empty())
			return matFilter;

		// ����ǰ��ķ���,��һ����ֵ 
		float d = 1 / (2 * CV_PI * sigma * sigma);
		float exp_d = -1 / (2 * sigma * sigma);

		// ����ģ��
		int halfw = kernel.width / 2;
		int halfh = kernel.height / 2;
		cv::Mat matTemplate(kernel, CV_32FC2);
		auto fvalue = matTemplate.at<cv::Point2f>(0, 0);
		for(int x = 0;x < kernel.height; x++)
			for (int y = 0; y < kernel.width; y++)
			{
				matTemplate.at<cv::Point2f>(x, y) = cv::Point2f(x - halfw, y - halfh);
			}

		// �����˹ģ��
		for(int x = 0; x < kernel.height; x++)
			for (int y = 0; y < kernel.width; y++)
			{

			}


		// �˲����Ӹ��������˲�
		for(int x = 0; x < image.size().height; x++)
			for (int y = 0; y < image.size().width; y++)
			{
				// 
			}
	}

	static cv::Mat GaussianWithAnisotriopic(const cv::Mat& image, cv::Size kernel, float sigma)
	{
		cv::Mat matFilter;

		if (image.empty())
			return matFilter;

		// �˲�

	}
};
