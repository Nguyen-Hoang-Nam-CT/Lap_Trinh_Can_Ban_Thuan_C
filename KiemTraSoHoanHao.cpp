#include<stdio.h>

int KiemTraSoHoanHao(int x);

int main()
{
	int a;
	printf("Nhap so nguen duong: ");
	do 
	{
	    scanf("%d",&a);
	    if(a<=0)
	    	printf("Nhap lai so nguye duong: ");
	}while(a<=0);
	if(KiemTraSoHoanHao(a))
		printf("\n%d la so hoan hao",a);
	else
		printf("\n%d khong phai la so hoan hao",a);
	return 0;
}

int KiemTraSoHoanHao(int x)
{
	int tong;
	for(int i=1;i<x;i++)
		if(x%i==0)
			tong+=i;
	if(tong==x)
		return 1;
	return 0;
}
