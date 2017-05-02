#include "stdio.h"

int main(){
//Problem 1
/*
	int sum=0;
	for(int i=0;i<1000;i++){
		if(i%3==0||i%5==0)
			sum+=i;
	}
	printf("\tProblem 1\n");
	printf("sum of the multiples of 3 or 5 below 1000\t%d\n",sum);
*/
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

	printf("\t%d\n",sum);	

//	sizeof(int)=4;
//problem 3
	
	return 0;
}

