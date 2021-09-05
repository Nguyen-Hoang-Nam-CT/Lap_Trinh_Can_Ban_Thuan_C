#include<stdio.h>

float TongBPND(int n);

int main()
{
	int a;
	printf("Nhap so nguyen duong: ");
	do{
		scanf("%d",&a);
		if(a <= 0)
			printf("\nNhap lai so nguyen duong: ");
	}while(a<=0);
	float kq=TongBPND(a);
	printf("\nTong binh phuong nghich dao cua cac so tu 1 den %d la: %.3f",a,kq);
	return 0;
}

float TongBPND(int n)
{
	float tong = 0;
	for(int i=1;i<=n;i++)
		tong =tong + 1.0/(i*i);
	return tong;
}


