#include<stdio.h>
#include<string.h>


// ham copy chuoi strcpy
void STRCPY(char s2[],char s1[]);
int main()
{
	printf("\nNhap vao mot chuoi bi coppy: ");
	char s1[1000];
	gets(s1);
	
	char s2[1000],s3[1000];
	
	STRCPY(s2,s1);
	printf("\nTu lam  : Chuoi s2 sau khi copy chuoi s1: %s",s2);
	strcpy(s3,s1);
	printf("\nMac dinh: chuoi s3 sau khi copy chuoi s1: %s",s3);
	return 0;
}
void STRCPY(char s2[],char s1[])
{
	for(int i=0;i<=strlen(s1);i++)
	{
		s2[i]=s1[i];
	}
}
