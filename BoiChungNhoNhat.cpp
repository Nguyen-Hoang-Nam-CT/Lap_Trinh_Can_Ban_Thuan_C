#include<stdio.h>

int UCLN(int a,int b);
int BCNN(int a,int b);
int main()
{
	int a,b;
	
	printf("Nhap so nguyen a: ");
	do{
		scanf("%d",&a);
		if(a <= 0)
			printf("\nNhap lai so nguyen a: ");
	}while(a <= 0);
	
	printf("Nhap so nguyen b: ");
	do{
		scanf("%d",&b);
		if(b <= 0)
			printf("\nNhap lai so nguyen b: ");
	}while(b <= 0);
	
	int kq = UCLN(a,b);
	printf("\nUoc chung lon nhat cua %d va %d la: %d",a,b,kq);
	
	int resualt = BCNN(a,b);
	printf("\nboi chung nho nhat cua %d va %d la: %d",a,b,resualt);
	return 0;
}
int BCNN(int a,int b)
{
	return (a*b)/UCLN(a,b);
}

//------------------------
int UCLN(int a,int b)
{
	int du,x,y;
	x=a;
	y=b;
	while(y!=0)
	{
		du=x%y;
		x=y;
		y=du;
	}
	return x;
}
