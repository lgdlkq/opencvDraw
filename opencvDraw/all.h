#include<opencv2\core\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\imgproc\imgproc.hpp>

using namespace cv;

void DrawEllipse(Mat img,double angle);//�Զ�����ƺ�����ʵ�ֻ��Ʋ�ͬ�Ƕȣ���ͬ�ߴ����Բ
void DrawFilledCircle(Mat img,Point center);//�Զ�����ƺ�����ʵ����ʵ��Բ�Ļ���
void DrawPolygon(Mat img);//�Զ�����ƺ�����ʵ���˰�����εĻ���
void DrawLine(Mat img, Point start, Point end);//�Զ�����ƺ�����ʵ�����ߵĻ���