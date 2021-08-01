#include <stdio.h>

int main()

{

	int num, false, count, total;

	do
	{
		count++;
		printf("Enter a number: ");
		scanf("%d", &num);
		total=total+num;
	}while(num>=1 && num<=20);

	if(num>20)
		{
			printf("The number was higher than 20\n");
		}
	else if(num<1)
		{
			printf("The number was less than 1\n");
		}

	printf("There were %d numbers entered\n", count);

	return 0;
}
