#include<stdio.h>
#include<string.h>

char* VietHoaChuCaiDau(char s[]);
int main()
{
	char str[200];
	printf("\nNhap vao mot chuoi: ");
	gets(str);
	
	char* kq = VietHoaChuCaiDau(str);
	printf("\n chuoi sau khi duoc viet hoa chu cai dau la: %s",kq);
	return 0;
}

char* VietHoaChuCaiDau(char s[])
{
	char* tmp = strdup(s);
	strlwr(tmp);
	if(tmp[0]>='a'  && tmp[0] <= 'z')
		tmp[0]=tmp[0]-32;
	for(int i=1;i<strlen(tmp);i++)
		if(tmp[i]>= 'a' && tmp[i]<='z' && tmp[i-1]==' ')
			tmp[i]=tmp[i]-32;
	return tmp;
}
