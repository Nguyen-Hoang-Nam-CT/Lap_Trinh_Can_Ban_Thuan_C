#include<stdio.h>

int main()
{
	int a,b;
	printf("Nhap so nguyen duong a: ");
	while(a <= 0)
	{
		scanf("%d",&a);
		if(a <= 0)
			printf("\nNhap lai so nguyen a: ");
	}
	
	printf("Nhap so nguyen duong b: ");
	
	while(b <= 0)
	{
		scanf("%d",&b);
		if(b <= 0)
			printf("\nNhap lai so nguyen b: ");
	}
	
	int tempA=a, tempB=b, du;
	while(tempB != 0)
	{
		du = tempA % tempB;
		tempA = tempB;
		tempB = du;
		/*	25 va 10
			25 chia 10 duoc 2 du 5
			10 chua 5 duoc 2 du 0
			5 chia 0 stop!
		*/
	}
	printf("\nUoc chung lon nhat cua %d va %d la: %d",a,b,tempA);
	return 0;
}


/*
21 va 5
21 chia 5 duoc 4 du 1
5 chia 1 duoc 5 du 0
1 chia 0 stop!
*/

