#include"all.h"

//�Զ�����ƺ�����ʵ����ʵ��Բ�Ļ���
void DrawFilledCircle(Mat img, Point center) {
	int thickness = -1;
	int lineType = 8;

	circle(img,
		center,
		WINDOW_WIDTH / 32,
		Scalar(0, 0, 255),
		thickness,
		lineType);
}