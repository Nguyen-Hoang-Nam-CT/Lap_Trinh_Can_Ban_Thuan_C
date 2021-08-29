#include<stdio.h>
#include<conio.h>
// in cac so nguyen to nho hon 1000
int main()
{
	int dem,xuongDong=0;
	printf("\n\t=== Cac so nguyen to be hon 1000 ===\n");
	
	for(int i=1;i<1000;i++)
	{
		dem =0;
		for(int j=1;j<=i/2;j++)
			if(i%j==0)
				dem++;
		if(dem == 1)
		{
			printf("%5d",i);
			xuongDong++;
			if(xuongDong %10 == 0)
				printf("\n");
		}
	}
	printf("\n\t=====================================");
	getch();
	return 0;
}
