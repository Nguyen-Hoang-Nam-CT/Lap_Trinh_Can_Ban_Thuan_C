#include<stdio.h>
#include<string.h>
void STRREV(char s[]);
// ham dao chuoi
int main()
{
	printf("\nNhap vao mot chuoi: ");
	char s[1000];
	gets(s);
	printf("\nChuoi nhan duoc ban dau s: %s",s);
	STRREV(s);
	printf("\ntu lam: CHuoi nhan duoc sau khi goi ham dao chuoi: %s",s);
	strrev(s);
	strrev(s);
	printf("\nMac dinh: chuoi nhan duoc sau khi goi ham dao chuoi: %s",s);
	return 0;
}
void STRREV(char s[])
{
	char temp;
	for(int i=0;i<=(strlen(s)/2)-1;i++)
	{
		temp = s[i];
		s[i] = s[strlen(s)-i-1];
		s[strlen(s)-i-1] = temp;
	}
}
