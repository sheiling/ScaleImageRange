#pragma once

#include "opencv2/opencv.hpp"

class BottomHat {

private:
	BottomHat() {}

public:
	// 提取图像中的锯齿
	static bool ExtrackRaws(const cv::Mat& source, cv::Mat& result)
	{
		if (source.empty())
			return false;

		cv::Mat shape = cv::getStructuringElement(cv::MorphShapes::MORPH_ELLIPSE, cv::Size(50, 100));
		cv::morphologyEx(source, result, cv::MorphTypes::MORPH_BLACKHAT, shape);
		cv::bitwise_xor(source, result, result);
		return true;
	}
		 
};