#include<iostream>

#define GiaCN 800000
#define GiaBH 600000
#define GiaGX 500000
#define SizeArray 1024
#define GiaMD 7700000
using namespace std;

void inTien(int *Arr,int &size,int soCanIn);

int main()
{
	int bcn,bbh,bgx,acn,abh,agx,thanhTien,tienLoi;
	long bv,av;
	cout<<"\nNhap beafore CN: ";
	cin>>bcn;
	cout<<"\nNhap beafore BH: ";
	cin>>bbh;
	cout<<"\nNhap beafore GX: ";
	cin>>bgx;
	
	cout<<"\nNhap after CN: ";
	cin>>acn;
	cout<<"\nNhap after BH: ";
	cin>>abh;
	cout<<"\nNhap after GX: ";
	cin>>agx;
	
//	cout<<"\nNhap beafore Vang: ";
//	cin>>bv;
//	cout<<"\nNhap after vang: ";
//	cin>>av;
	
	int soLuongCN = acn - bcn;
	int soLuongBH = abh - bbh;
	int soLuongGX = agx - bgx;
	
	thanhTien = soLuongCN*GiaCN + soLuongBH*GiaBH + soLuongGX*GiaGX /*+ (av - bv)*/;
	
	int *Arr = new int[SizeArray];
	int size = 0;
	cout<<"\nThanh Tien: ";
	inTien(Arr,size,thanhTien);
	
	tienLoi = thanhTien - GiaMD;
	int *ArrTienLoi = new int[SizeArray];
	int sizeTienLoi = 0;
	cout<<"\nTien loi`: ";
	inTien(ArrTienLoi,sizeTienLoi,tienLoi);
	
	system("pause");
	
	delete[] Arr;
	delete[] ArrTienLoi;
}
void inTien(int *Arr,int &size,int soCanIn)
{
	int temp = soCanIn;
	size=0;
	while(temp != 0)
	{
		Arr[size] = temp%10;
		temp /= 10;
		size++;
	}
	for(int i = size - 1;i >= 0; i--)
	{
		if((i + 1) % 3 == 0 && i != (size - 1))
			cout<<".";
		cout<<Arr[i];
	}
}
