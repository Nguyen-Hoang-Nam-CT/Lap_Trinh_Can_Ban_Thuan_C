#include<stdio.h>
#include<conio.h>
int KiemTraSoHoanHao(int x);

int main()
{
	printf("\nCac so hoan hao nho hon 10.000 la: ");
	for(int i=1;i<10000;i++)
	{
		if(KiemTraSoHoanHao(i))
			printf("%5d",i);
	}
	printf("\nBan phim bat ky de ket thuc chuong trinh");
	getch();
	return 0;
}

int KiemTraSoHoanHao(int x)
{
	int tong = 0;
	for(int i=1;i<=x/2;i++)
		if(x%i==0)
			tong+=i;
	if(tong==x)
		return 1;
	return 0;
}
