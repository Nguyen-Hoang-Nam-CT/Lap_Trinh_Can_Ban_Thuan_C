#include<stdio.h>
#include<string.h>


void STRLWR(char s[]);
// ham chuyen tat ca ki tu cua chuoi sang ki tu thuong

int main()
{
	printf("\nNhap vao mot chuoi: ");
	char s[1000];
	gets(s);
	STRLWR(s);
	printf("\nChuoi nhan duoc ban dau la: %s",s);
	
	
	return 0;
}
void STRLWR(char s[])
{
	for(int i=0;i<strlen(s);i++)
		if(s[i]>='A' && s[i]<='Z')
		{
			s[i]+=32;
		}
}
