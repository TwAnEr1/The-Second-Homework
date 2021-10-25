#include<stdio.h>
int main()
{
	char operational;
	double firstNumber,secondNumber;
	printf("输入操作符(+, -, *,/): ");
    scanf("%c", &operational);
	 printf("输入两个数字: ");
    scanf("%lf %lf",&firstNumber, &secondNumber);
 
    switch(operational)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber + secondNumber);
            break;
 
        case '-':
            printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber - secondNumber);
            break;
 
        case '*':
            printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
            break;
 
        case '/':
            printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / secondNumber);
            break;
 
        
        default:
            printf("Error! operator is not correct");
    }
    
    return 0;
}
	
	
	
	

