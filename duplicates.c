#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{

	int bcount, num1, num2, num3, count;

	srand(time(NULL));


	for(count=1; count<=9; count++)
		{
		num1=rand() % 10+1;
        num2=rand() % 10+1;
        num3=rand() % 10+1;

		while(num1==num2)
			{
			num2=rand() % 10+1;
			}

		while(num1==num3)
			{
			num3=rand() % 10+1;
			}
		while(num2==num3)
			{
			num3=rand() %10+1;
			}

		printf("%d, ", num1);
        printf("%d, ", num2);
        printf("%d", num3);
		printf("\n");
		}


return 0;
}
