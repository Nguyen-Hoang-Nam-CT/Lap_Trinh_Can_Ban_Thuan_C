#include<stdio.h>

int main()
{
	for(int n=100;n<1000;n++)
	{
		if(((n%10)*((n/10)%10)*(n/100))%9==0)
			printf("%5d",n);
	}
	//n%10 la don vi
	//(n/10) %10 la chuc
	//(1/100) la tram
	
	return 0;
}

