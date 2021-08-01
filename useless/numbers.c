

#include <stdio.h>

int main ()
{

int num1, num2, num3, num4, num5, sum, count;

	printf("Type a number: \n");
	scanf("%d", &num1);
	printf("Type a number: \n");
	scanf("%d", &num2);
	printf("Type a number: \n");
	scanf("%d", &num3);
	printf("Type a number: \n");
	scanf("%d", &num4);
	printf("Type a number: \n");
	scanf("%d", &num5);

	count=0;

if (num1>10)
    {
    count=count+1;
    }
if (num2>10)
    {
    count=count+1;
    }
if (num3>10)
    {
    count=count+1;
    }
if (num4>10)
    {
    count=count+1;
    }
if (num5>10)
    {
    count=count+1;
    }
sum=num1+num2+num3+num4+num5;

printf("Total is %d\n", sum);

printf("Numbers greater than 10 %d\n", count);

return 0;
}
