#include<stdio.h>
int main(){
	int num1,num2,Result;
	char operator;
	printf("Enter two numbers");
	scanf(" %d",&num1);
	scanf(" %d",&num2);
	printf("Enter an operator");
	scanf(" %c",&operator);
	switch(operator){
		case '+':
			Result=num1 + num2;
			break;
			
		case '-':
			Result=num1 - num2;
			break;
			
		case '*':
			Result=num1 * num2;
			break;
			
		case '/':
			Result=num1 / num2;
			break;
	}
	printf("The answer is %d ",Result);
	
}