#include "stdio.h"

void Problem1()
{
	int sum=0;
	for(int i=0;i<1000;i++){
		if(i%3==0||i%5==0)
			sum+=i;
	}
	printf("\tProblem 1\n");
	printf("sum of the multiples of 3 or 5 below 1000\t%d\n",sum);

}

void Problem2()
{
	//problem 2
	int a=0,b=1;
	int c,sum;

	for(int i=1;i<=4000000;i++){
		c=a+b;
		a=b;
		b=c;
		if(c%2==0)
			sum+=c;
	}
//	sizeof(int)==4;
	printf("\t%d\n",sum);	
}

void Problem3()
{

}
int main()
{
	Problem1();
	Problem2();
		
	return 0;
}

