#include<stdio.h>
#include<string.h>

int DemCh(char s[]);

int main()
{
	char s[100];
	printf("\nNhap vao mot chuoi: ");
	fflush(stdin);
	gets(s);
	printf("\nSo luong chu ch co trong chuoi la: %d",DemCh(s));
	return 0;
}

int DemCh(char s[])
{
	int dem = 0;
	for(int i=0; i<strlen(s)-1;i++)
	{
		if(s[i]=='c' && s[i+1]=='h')
			dem++;
	}
	return dem;
}
