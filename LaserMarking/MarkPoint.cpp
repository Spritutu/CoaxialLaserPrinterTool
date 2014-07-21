#include "StdAfx.h"
#include "MarkPoint.h"
#include <math.h>

CMarkPoint::CMarkPoint(void)
{
	this->point = cvPoint2D32f(0.0,0.0);
	this->size = cvSize(0,0);
}
CMarkPoint::CMarkPoint(cv::Point2d pt, CvSize sz)
{
	this->SetPoint(pt);
	this->SetSize(sz);
}

cv::Point2d CMarkPoint::GetMarkPoint()
{
	return cvPoint2D32f(this->point.x + this->size.width/2,this->point.y + this->size.height/2);
	 
}
cv::Point2d CMarkPoint::GetMarkPoint(double offX,double offY)
{
	return cvPoint( this->point.x + offX, this->point.y + offY);
}
cv::Point2d CMarkPoint::GetCenterPoint(CMarkPoint mp)
{
	return cvPoint2D32f(( this->point.x + (mp.point.x-this->point.x)/2),( this->point.y + (mp.point.y-this->point.y)/2));	
}

double CMarkPoint::GetAngle(CMarkPoint mp)
{
	 return GetAngle(this->point,mp.point);
}
 double CMarkPoint::GetAngle(cv::Point2d pt1,cv::Point2d pt2)
 {
	 double k = 1.0*(pt1.y - pt2.y)/(pt2.x - pt1.x);
	 return 180*atan(k)/PI;
 }




 //����a���ڵ�b,����a�ڵ�b˳ʱ�뷽��,����true,���򷵻�false
 bool PointCmp(const cv::Point &a,const cv::Point &b,const cv::Point &center)
 {
	 if (a.x >= 0 && b.x < 0)
		 return true;
	 if (a.x == 0 && b.x == 0)
		 return a.y > b.y;
	 //����OA������OB�Ĳ��
	 int det = (a.x - center.x) * (b.y - center.y) - (b.x - center.x) * (a.y - center.y);
	 if (det < 0)
		 return true;
	 if (det > 0)
		 return false;
	 //����OA������OB���ߣ��Ծ����жϴ�С
	 int d1 = (a.x - center.x) * (a.x - center.x) + (a.y - center.y) * (a.y - center.y);
	 int d2 = (b.x - center.x) * (b.x - center.y) + (b.y - center.y) * (b.y - center.y);
	 return d1 > d2;
 }
 void ClockwiseSortPoints(std::vector<cv::Point> &vPoints)
 {
	 //��������
	 cv::Point center;
	 double x = 0,y = 0;
	 for (int i = 0;i < vPoints.size();i++)
	 {
		 x += vPoints[i].x;
		 y += vPoints[i].y;
	 }
	 center.x = (int)x/vPoints.size();
	 center.y = (int)y/vPoints.size();

	 //ð������
	 for(int i = 0;i < vPoints.size() - 1;i++)
	 {
		 for (int j = 0;j < vPoints.size() - i - 1;j++)
		 {
			 if (PointCmp(vPoints[j],vPoints[j+1],center))
			 {
				 cv::Point tmp = vPoints[j];
				 vPoints[j] = vPoints[j + 1];
				 vPoints[j + 1] = tmp;
			 }
		 }
	 }
 }