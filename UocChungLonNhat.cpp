#include<stdio.h>

int main()
{
	int a,b;
	printf("Nhap so nguyen duong a: ");
<<<<<<< HEAD
	while(a <= 0)
=======
	do
>>>>>>> 7dac968c43bf5dbae792593378078165dbc2425b
	{
		scanf("%d",&a);
		if(a <= 0)
			printf("\nNhap lai so nguyen a: ");
<<<<<<< HEAD
	}
	
	printf("Nhap so nguyen duong b: ");
	
	while(b <= 0)
=======
	}while(a <= 0);
	
	printf("Nhap so nguyen duong b: ");
	do
>>>>>>> 7dac968c43bf5dbae792593378078165dbc2425b
	{
		scanf("%d",&b);
		if(b <= 0)
			printf("\nNhap lai so nguyen b: ");
<<<<<<< HEAD
	}
	
	int tempA=a, tempB=b, du;
	while(tempB != 0)
=======
	}while(b <= 0);
	
	int tempA = a,tempB = b, du;
	while(tempB!=0)
>>>>>>> 7dac968c43bf5dbae792593378078165dbc2425b
	{
		du = tempA % tempB;
		tempA = tempB;
		tempB = du;
<<<<<<< HEAD
		/*	25 va 10
			25 chia 10 duoc 2 du 5
			10 chua 5 duoc 2 du 0
			5 chia 0 stop!
		*/
=======
>>>>>>> 7dac968c43bf5dbae792593378078165dbc2425b
	}
	printf("\nUoc chung lon nhat cua %d va %d la: %d",a,b,tempA);
	return 0;
}


<<<<<<< HEAD
/*
21 va 5
21 chia 5 duoc 4 du 1
5 chia 1 duoc 5 du 0
1 chia 0 stop!
*/

=======
>>>>>>> 7dac968c43bf5dbae792593378078165dbc2425b
