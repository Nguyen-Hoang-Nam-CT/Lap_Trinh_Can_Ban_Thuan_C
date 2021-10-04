#include<stdio.h>

int main()
{
	int n,sodao = 0,sodu;
	printf("nhap so nguyen: ");
	scanf("%d",&n);
	while(n!=0)
	{
		sodu=n%10;
		sodao=sodao*10+sodu;
		n = n/10;
	}
	printf("\n so dao cua %d la: %d",n,sodao);
	return 0;
}
