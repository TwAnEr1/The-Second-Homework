#include<stdio.h>
int main()
{
	int i,t;
	float a=2;
	float b=1;
	float sum=0;
	for (i=1;i<=20;i++)
	{
	sum=sum+a/b;
	t=a;
	a=a+b;
	b=t;
	}	
    printf("%f\n",sum);		
	}
	
	
	

