#pragma once
#include <cv.h>
#include "cxcore.h"
#include "highgui.h"


//����a���ڵ�b,����a�ڵ�b˳ʱ�뷽��,����true,���򷵻�false
bool PointCmp(const cv::Point &a,const cv::Point &b,const cv::Point &center);
void ClockwiseSortPoints(std::vector<cv::Point> &vPoints);


class CMarkPoint
{
public:
	CMarkPoint(void);

	CMarkPoint(cv::Point2d pt, CvSize sz);

	inline void SetPoint(cv::Point2d pt)
	{
		point = cvPoint2D32f(pt.x,pt.y);
	}
	
	inline void SetSize(CvSize sz)
	{
		size = cvSize(sz.width,sz.height);
	}

	cv::Point2d GetMarkPoint();
	cv::Point2d GetMarkPoint(double offX,double offY); 

	cv::Point2d GetCenterPoint(CMarkPoint mp);

	double GetAngle(CMarkPoint mp);
	static double GetAngle(cv::Point2d pt1,cv::Point2d pt2);
private:
	cv::Point2d point;
	CvSize size;

};