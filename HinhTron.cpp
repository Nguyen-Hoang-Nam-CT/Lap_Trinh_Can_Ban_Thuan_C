#include<stdio.h>

float ChuViHinhTron(float r);

int main()
{
	float R;
	printf("nhap ban kinh R: ");
	scanf("%f",&R);
	float kq = ChuViHinhTron(R);
	printf("\nchu vi hinh tron la: %.3f", kq);
	return 0;
}

float ChuViHinhTron(float r)
{
	float cv;
	cv = 2 * 3.14 *r;
	return cv;
}
