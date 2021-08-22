#include<stdio.h>
#include<string.h>

int STRLEN(char s[]);
// ham lay do dai cua chuoi

int main()
{
	printf("Nhap vao mot chuoi: ");
	char s[10000];
	gets(s);
	
	printf("\nChuoi nhan duoc la: %s",s);
	printf("\ntu lam  : Do dai cua chuoi s la: %d",STRLEN(s));
	printf("\nmac dinh: Do dai cua chuoi s la: %d",strlen(s));
	return 0;
}

int STRLEN(char s[])
{
	int count=0;
	while(s[count]!='\0')
		count++;
	return count;
}
