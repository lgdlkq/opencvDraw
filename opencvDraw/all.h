#include<opencv2\core\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\imgproc\imgproc.hpp>

using namespace cv;

void DrawEllipse(Mat img,double angle);//自定义绘制函数，实现绘制不同角度，相同尺寸的椭圆
void DrawFilledCircle(Mat img,Point center);//自定义绘制函数，实现了实心圆的绘制
void DrawPolygon(Mat img);//自定义绘制函数，实现了凹多边形的绘制
void DrawLine(Mat img, Point start, Point end);//自定义绘制函数，实现了线的绘制