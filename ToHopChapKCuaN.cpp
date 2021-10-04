#include<stdio.h>

float CKN(int n, int k);

int main()
{
	int k,n;
	
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	printf("Nhap so nguyen k: ");
	scanf("%d",&k);
	while(k<0 || k>n)
	{
	printf("Nhap lai so nguyen k: ");
	scanf("%d",&k);
	}
	float kq = CKN(n,k);
	printf("\nTo hop chap %d cua %d la: %f",k,n,kq);
	return 0;
}
float CKN(int n, int k)
{
	int NGiaiThua=1,KGiaiThua=1,NTruKGiaiThua=1;
	float ckn;
	for(int i=1;i<=n;i++)
	{
		NGiaiThua*=i;
	}
	//-----------------------
	for(int j=1;j<=k;j++)
	{
		KGiaiThua*=j;
	}
	//-----------------------
	for(int l=1;l<=(n-k);l++)
	{
		NTruKGiaiThua*=l;
	}
	//-----------------------
	ckn = NGiaiThua/((KGiaiThua)*NTruKGiaiThua);
	return ckn;
}
