#include"all.h"

//自定义绘制函数，实现了实心圆的绘制
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