#pragma once

#include"opencv2/opencv.hpp"

class LutOperator
{
	static bool LutImage(const cv::Mat& source, cv::Mat& matResult)
	{
		if (source.empty())
			return false;

		bool color = source.channels() == 3 ? true : false;
		cv::Mat matLut(1, 256 * source.channels(), source.type());
		for (int i = 0; i < 256; i++)
		{
			uchar value = 0;
			if (i < 100)
				value = 0;
			else if (i >= 100 && i < 200)
				value = 100;
			else
				value = 255;

			if (color)
				matLut.at<cv::Vec3b>(0, i) = cv::Vec3b(value, value, value);
			else
				matLut.at<uchar>(0, i) = value;
		}
		cv::LUT(source, matLut, matResult);
		return true;
	}
};

