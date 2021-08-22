#include<stdio.h>
#include<string.h>
int STRCMP(char s1[],char s2[]);
// ham so sanh chuoi co phan biet chu hoa chu thuong
int main()
{
	char s1[1000],s2[1000];
	printf("\nNhap vao chuoi s1: ");
	gets(s1);
	printf("\nNhap vao chuoi s2: ");
	gets(s2);
	
	printf("\nTu lam: Ket qua so sanh hai chuoi s1,s2 la: %d",STRCMP(s1,s2));
	printf("\nTu lam: Ket qua so sanh hai chuoi s2,s1 la: %d",STRCMP(s2,s1));
	printf("\n\nMac dinh: Ket qua so sanh hai chuoi s1,s2 la: %d",strcmp(s1,s2));
	printf("\nMac dinh: Ket qua so sanh hai chuoi s2,s1 la: %d",strcmp(s2,s1));
	return 0;
}
int STRCMP(char s1[],char s2[])
{
	int strlenMin = strlen(s1) < strlen(s2) ? strlen(s1):strlen(s2);
	for(int i=0;i<strlenMin;i++)
	{
		if(s1[i]>s2[i])
			return 1;
		else if(s1[i]<s2[i])
			return -1;
	}
	if(strlen(s1)>strlen(s2))
		return 1;
	if(strlen(s1)<strlen(s2))
		return -1;
	return 0;
}
