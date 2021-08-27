#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void nhap(int a[],int &n);
void xuat(int a[],int n);
int tongLe(int a[],int n)
{
	int tong=0;
	for(int i=0;i<n;i++)
		if(a[i]%2!=0)
			tong+=a[i];
	return tong;
}
float tbc(int a[],int n)
{
	int TBC=0;
	for(int i=0;i<n;i++)
		TBC+=a[i];
	return TBC/(float)n;
}
int gtMin(int a[],int n)
{
	if(n==0)
		return 0;
	int min=a[0];
	for(int i=0;i<n;i++)
		if(a[i]<min)
			min=a[i];
	return min;
}
int viTriMax(int a[],int n)
{
	if(n==0)
		return -1;
	int vtMax=0;
	for(int i=0;i<n;i++)
		if(a[i]>a[vtMax])
			vtMax=i;
	return vtMax;
}
int mtc(int a[],int n)
{
	for(int i=0;i<n;i++)
		if(a[i]%2!=0)
			return 0;
	return 1;
}
void lkd(int a[],int n)
{
	int dem=0;
	printf("\nCac so duong co trong mang la: ");
	for(int i=0;i<n;i++)
		if(a[i]>0)
		{
			dem++;
			printf("\n%5d",a[i]);
		}
	if(dem==0)
		printf("Mang khong co so duong.");
	
}
int main()
{
	int a[100],n;
	nhap(a,n);
	printf("\nThong tin mang ban dau: ");
	xuat(a,n);
	printf("\nTong cac so le trong mang la: %d",tongLe(a,n));
	printf("\nTrung binh cong cua mang la: %f",tbc(a,n));
	printf("\nGia tri min trong mang la: %d",gtMin(a,n));
	printf("\nVi tri max trong mang la: %d",viTriMax(a,n));
	if(mtc(a,n))
		printf("\nMang Toan cac so chan");
	else
		printf("\nMang co so le");
	lkd(a,n);
	return 0;
}

void nhap(int a[],int &n)
{
	printf("\nNhap so luong phan tu: ");
	scanf("%d",&n);
	srand(time(0));
	int luaChon;
	printf("\nNhap lua chon cua ban(1 nhap Tay)(2 auto): ");
	scanf("%d",&luaChon);
	if(luaChon==1)
		for(int i=0;i<n;i++)
		{
			printf("\nNhap phan tu thu %d: ",i+1);
			scanf("%d",&a[i]);	
		}	
	else
		for(int i=0;i<n;i++)
			a[i]=rand()%(11);
		
	printf("\n");
}
void xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%5d",a[i]);
	printf("\n");
}
