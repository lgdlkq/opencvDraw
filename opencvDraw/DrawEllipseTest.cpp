#include"all.h"

//�Զ�����ƺ�����ʵ�ֻ��Ʋ�ͬ�Ƕȣ���ͬ�ߴ����Բ
void DrawEllipse(Mat img, double angle) {
	int thickness = 2;
	int lineType = 8;

	ellipse(img,
		Point(WINDOW_WIDTH / 2, WINDOW_WIDTH / 2),
		Size(WINDOW_WIDTH / 4, WINDOW_WIDTH / 16),
		angle,
		0,
		360,
		Scalar(255, 129, 0),
		thickness,
		lineType);
}