#include<stdio.h>
#include<string.h>

int DemCh(char s[]);
int demSoTu(char s[]);
int main()
{
	char s[100];
	printf("\nNhap vao mot chuoi: ");
	fflush(stdin);
	gets(s);
	printf("\nSo luong chu ch co trong chuoi la: %d",DemCh(s));
	printf("\nSo tu co trong chuoi la: %d",demSoTu(s));
	return 0;
}
int demSoTu(char s[])
{
	if(strlen(s) <= 1 && s[0] == ' ')
		return 0;
	else if(strlen(s) <= 1)
		return 1;
	
	int count;
	if(s[0] != ' ')
		count = 1;
	else
		count = 0;
	for(int i=1;i<strlen(s);i++)
		if(s[i] != ' ' && s[i-1] == ' ')
			count++;
	return count;
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
