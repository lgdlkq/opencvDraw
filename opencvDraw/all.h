#include<opencv2\core\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\imgproc\imgproc.hpp>

using namespace cv;

#define WINDOW_NAME1 "������ͼ1��"//Ϊ���ڱ��ⶨ���
#define WINDOW_NAME2 "������ͼ2��"//Ϊ���ڱ��ⶨ���
#define WINDOW_WIDTH 600//���崰�ڴ�С�ĺ�

void DrawEllipse(Mat img,double angle);//�Զ�����ƺ�����ʵ�ֻ��Ʋ�ͬ�Ƕȣ���ͬ�ߴ����Բ
void DrawFilledCircle(Mat img,Point center);//�Զ�����ƺ�����ʵ����ʵ��Բ�Ļ���
void DrawPolygon(Mat img);//�Զ�����ƺ�����ʵ���˰�����εĻ���
void DrawLine(Mat img, Point start, Point end);//�Զ�����ƺ�����ʵ�����ߵĻ���