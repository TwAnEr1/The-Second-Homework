#include<stdio.h>
int main()
{
	int number_1, number_2,number_3,number_4,number_5,x;
	printf("请输入数字；"); 
	scanf("%d",&x);
	number_1=x/10000;
	number_2=x%10000/1000;
	number_3=x%1000/100;
	number_4=x%100/10;
	number_5=x%10;
	if(number_1!=0){
		printf("为五位，逆序； %d %d %d %d %d\n",number_5,number_4,number_3,number_2,number_1);
	}else if(number_2!=0){
		printf("为四位，逆序； %d %d %d %d \n",number_5,number_4,number_3,number_2);
	}else if(number_3!=0){
		printf("为三位，逆序； %d %d %d \n",number_5,number_4,number_3);
	}else if(number_4!=0){
		printf("为二位，逆序； %d %d  \n",number_5,number_4);
	}else if(number_5!=0){
		printf("为一位，逆序； %d  \n",number_5);
	}
}

