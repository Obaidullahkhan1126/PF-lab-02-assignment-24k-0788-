#include<stdio.h>
int main(){
	float amount,discounted_amount,saved_amount;
	int discount;
	printf("Enter cost of items");
	scanf("%f",&discount);
	if  amount >=500
	 switch(amount){
		case amount < 2000:
			discount = 5%;
			break;
		case amount >= 2000 & amount =< 4000:
			discount = 10%;
			break;
		case amount >4000 & amount =<6000 :
			discount = 20%;
			break;
		case amount > 6000:
			discount = 35%;
			break;
		}
	
	
			
	discounted_amount = amount*discount
	saved_amount = amount - discounted_amount
	printf("The actual amount was %f",amount);
	printf("The amount after discount is %f",discounted_amount);
	printf("The saved amount is %f",saved_amount);
return 0;
}
	
	
	
	

			