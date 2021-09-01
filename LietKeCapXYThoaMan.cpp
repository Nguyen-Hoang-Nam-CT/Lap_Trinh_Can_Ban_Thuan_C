#include<stdio.h>
int main()
{
	int x,y;
	printf("\nCac cap x,y thoa man phuong trinh tren la: ");
	for(x=-10;x<=10;x++)
		for(y=-5;y<=5;y++)
			if(2*x+3*y==5)
				printf("\t(%d:%d)",x,y);

}
