#include<stdio.h>
int main()
{
	char operational;
	double firstNumber,secondNumber;
	printf("���������(+, -, *,/): ");
    scanf("%c", &operational);
	 printf("������������: ");
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
	
	
	
	

