#pragma once

#include <tuple>
#include "opencv2/opencv.hpp"

class ScaleImage
{
private:
	ScaleImage() {}

public:
	static cv::Mat ScaleRange(const cv::Mat& image,int min,int max,int sMin,int sMax)
	{
		// y =  ax + b
		// 1.将小于min的灰度值全部设置为 0
		cv::Mat matReulst = image.clone();
		// 小于区间设置为 0
		matReulst.setTo(0, matReulst < min);
		// 大于区间设置为 255
		matReulst.setTo(255, matReulst > max);

		auto a = (sMax - max) / (sMin - min);
		auto b = (sMin * sMax - min * sMax) / (sMin - min);

		for(int x = 0; x < matReulst.size().height; x++)
			for (int y = 0; y < matReulst.size().width; y++)
			{
				uchar gray = matReulst.at<uchar>(x, y);
				// 对图像进行拉伸
				if (gray >= min && gray <= max)
					matReulst.at<uchar>(x, y) = gray * a + b;		
			}
		return matReulst;
	}
};

