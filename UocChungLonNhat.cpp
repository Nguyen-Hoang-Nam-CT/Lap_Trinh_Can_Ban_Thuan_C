#include<stdio.h>

int main()
{
	int a,b;
	printf("Nhap so nguyen duong a: ");
	do
	{
		scanf("%d",&a);
		if(a <= 0)
			printf("\nNhap lai so nguyen a: ");
	}while(a <= 0);
	
	printf("Nhap so nguyen duong b: ");
	do
	{
		scanf("%d",&b);
		if(b <= 0)
			printf("\nNhap lai so nguyen b: ");
	}while(b <= 0);
	
	int tempA = a,tempB = b, du;
	while(tempB!=0)
	{
		du = tempA % tempB;
		tempA = tempB;
		tempB = du;
	}
	printf("\nUoc chung lon nhat cua %d va %d la: %d",a,b,tempA);
	return 0;
}


