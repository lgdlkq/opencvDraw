#include"all.h"

//�Զ�����ƺ�����ʵ�����ߵĻ���
void DrawLine(Mat img, Point start, Point end) {
	int thickness = 2;
	int lineType = 8;
	line(img, start,
		end,
		Scalar(0, 0, 0),
		thickness,
		lineType);
}