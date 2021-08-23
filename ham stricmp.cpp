#include<stdio.h>
#include<string.h>

int STRICMP(char s1[],char s2[]);
//ham so sanh chuoi khong phan biet chu hoa chu thuong


int main()
{
	char s1[1000],s2[1000];
	printf("\nNhap vao chuoi s1: ");
	gets(s1);
	printf("\nNhap vao chuoi s2: ");
	gets(s2);
	
	printf("\nTu lam: Ket qua so sanh hai chuoi s1,s2 la: %d",STRICMP(s1,s2));
	printf("\nTu lam: Ket qua so sanh hai chuoi s2,s1 la: %d",STRICMP(s2,s1));
	printf("\n\nMac dinh: Ket qua so sanh hai chuoi s1,s2 la: %d",stricmp(s1,s2));
	printf("\nMac dinh: Ket qua so sanh hai chuoi s2,s1 la: %d",stricmp(s2,s1));
	return 0;
}
int STRICMP(char s1[],char s2[])
{
	int strlenMin = strlen(s1)<strlen(s2) ? strlen(s1):strlen(s2);
	strlwr(s1);strlwr(s2);
	for(int i=0;i<strlenMin;i++)
	{
		if(s1[i]>s2[i])
			return s1[i]-s2[i];
		else if(s1[i]<s2[i])
			return -(s2[i]-s1[i]);
	}
	if(strlen(s1)>strlen(s2))
		return s1[strlenMin];
	if(strlen(s1)<strlen(s2))
		return -s2[strlenMin];
	return 0;
}
