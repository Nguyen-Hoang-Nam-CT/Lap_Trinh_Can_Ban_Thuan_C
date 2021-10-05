#include<stdio.h>

#include<string.h>
char* XoaSo(char s[]);
void XoaKyTu(char s[],int vt);
int main()
{
	char str[100];
	printf("Nhap vao mot chuoi: ");
	gets(str);
	char* kq = XoaSo(str);
	printf("\nChuoi sau khi duoc xoa so la: %s",kq);	
	return 0;
}
char* XoaSo(char s[])
{
	char* tmp = strdup(s);
	for(int i=0;i<strlen(tmp);)
		if(tmp[i]>='0' && tmp[i]<='9')
			XoaKyTu(tmp,i);
		else
			i++;
	return tmp;
}
void XoaKyTu(char s[],int vt)
{
	for(int i=vt;i<strlen(s);i++)
		s[i]=s[i+1];
}

