#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void first()
{
	float f,c;
	float lower,upper,step;
	lower=0;
	upper=300;
	step=20;

	f=lower;
	printf("  F . C Table\n");
	while(f<=upper)	
	{
		c=(5.0/9.0)*(f-32.0);
		printf("%3.0f%6.1f\n",f,c);
		f+=step;
	}	

	c=lower;
	printf("  C . F Table\n");
	while(c<=upper)	
	{
		f=(9.0/5.0)*(c+32.0);
		printf("%3.0f%6.1f\n",c,f);
		c+=step;
	}



}

void second()
{
	for(float c=UPPER;c>=LOWER;c-=STEP)	
	{
		printf("____________\n");
		printf("|%3.0f|%6.1f|\n",c,(9.0/5.0)*(c+32.0));
		
	}
	printf("____________\n");

}

void wordCopy()
{
	//在终端进行文字复制
	//EOF(end of file,文件结束)	
	char c;
	while((c=getchar())!=EOF)
		putchar(c);

	c=getchar()!=EOF;
	printf("%d\n",c);
	printf("%d\n",EOF);

}


void charCount()
{
	//字符计数程序
//count characters int put; 1 st version
	long int nc;
	nc=0;
	while(getchar()!=EOF)
		++nc;
	printf("%ld\n",nc);


//count characters int put; 2 st version
/*	double nc;
	for(nc=0;getchar()!=EOF;nc++)
		;
	printf("%.0f\n",nc);
*/

	
}


void lineCount()
{
	//统计行数
//count lines in input
	int c,nl;
	nl=0;
	while((c=getchar())!=EOF)
		if(c=='\n')
			++nl;
	printf("%d\n",nl);

}

void countNum()
{
	//统计空格,制表符与换行符个数
	int c,sp,tl,nl;
	sp=tl=nl=0;
	while((c=getchar())!=EOF) {
		if(c==' ')
			sp++;
		if(c=='\t')
			tl++;
		if(c=='\n')
			nl++;
	}
	printf("空格数为%3d\n制表符数为%3d\n换行符数为%3d\n",sp,tl,nl);

}

void inputCopy1()
{
	//将输入复制到输出,将连续的多个空格用一个空格替代
	int c;
	while((c=getchar())!=EOF)
		if(c==' ') {
			
			c=getchar();
			if(c!=' '&&c!=EOF) {
				putchar(' ');
				putchar(c);
			}
			else if(c==EOF) {
				putchar(' ');
				break;
			}
			else {
				while((c==' ')&&(c!=EOF))
					c=getchar();
				putchar(' ');
				putchar(c);
			}
			
		}
		else
			putchar(c);

}

void inputCopy2()
{
	//将输入复制到输出,将制表符,反斜杠和回退符以可见方式显示
	int c;
	while((c=getchar())!=EOF)
		if(c=='	')
			printf("\\t");	
		else if(c=='\\')
			printf("\\");
		else if(c==' ')
			printf("\\b");
		else
			putchar(c);

}

int main()
{

	inputCopy2();		

	return 0;
}
