// mpg calculator
#include <stdio.h>
int main ()
{
	float start, end, gallons;
	float dist, mpg;

	printf ("starting mileage: ");
	scanf("%f", &start);
	printf("Ending mileage: ");
	scanf("%f", &end);
 	printf("How many gallons: ");
	scanf("%f", &gallons);

	dist = end - start;
	mpg = dist / gallons;
	

	printf("Distance traveled: %.2f\n", dist);
	printf("Miles per gallon :  %.2f\n", mpg);
	return 0;
}
