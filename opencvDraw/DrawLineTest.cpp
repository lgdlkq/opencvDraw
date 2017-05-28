#include"all.h"

//自定义绘制函数，实现了线的绘制
void DrawLine(Mat img, Point start, Point end) {
	int thickness = 2;
	int lineType = 8;
	line(img, start,
		end,
		Scalar(0, 0, 0),
		thickness,
		lineType);
}