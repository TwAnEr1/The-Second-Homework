#include<stdio.h>
int main()
{
	void swap(int*x,int*y);
	int a=4,b=5,c=1;
	int *p1,*p2,*p3;
	p1=&a;p2=&b;p3=&c;
	
	if(a>b)swap(p1,p2);
	if(a>c)swap(p1,p3);
	if(b>c)swap(p2,p3);
	
	printf("%d %d %d",a,b,c);
	printf("%d %d %d",*p1,*p2,*p3);
	return 0;
	
	
	
	
	
 } 
 void swap(int *x,int *y)
 {
 	int p;
 	p=*x;*x=*y;*y=p;
 	
 	
 }
