#include<stdio.h>

float ChuViTamGiac(float a,float b,float c);

int main()
{
	float a,b,c;
	printf("\nNhap do dai 3 canh cua tam giac");
	printf("\nNhap a: ");
	scanf("%f",&a);
	printf("\nNhap b: ");
	scanf("%f",&b);
	printf("\nNhap c: ");
	scanf("%f",&c);
	float kq = ChuViTamGiac(a,b,c);
	printf("\nChu vi tam giac la: %3.1f",kq);
	return 0;
}

float ChuViTamGiac(float a,float b,float c)
{
	float cv=a+b+c;
	return cv;
}
