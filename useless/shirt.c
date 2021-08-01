#include <stdio.h>
int main ()
{

int quantity;
float subtotal, total, discount ;

//how many shirts
printf("How may shirts: ");
scanf("%d", &quantity);

//Find subtotal
subtotal = quantity * 9.99; 
printf("subtotal is %f\n", subtotal);


//chekc for discount
discount = 0;
if ( quantity >= 10)
{
	printf(" Discount applied\n");
	discount = 5.00;
}
if ( quantity <10)
{
	printf("No discount applied\n");
}

total = subtotal - discount;
printf("Final total: %f\n", total);

return 0;
}
