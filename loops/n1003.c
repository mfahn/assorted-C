#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int k, x;
	int sum = 0, even = 0, max = 0;

	srand(time(NULL));
	for ( k = 0; k < 10; k++ )
	{
		x = rand() % 26;
		printf("%d ", x);
		sum = sum + x;
	 	if(x % 2 ==0)
		{
			even++;
		}
		if(x>max)
		{
			max=x;
		}
	}
	printf("\n");
	printf("Total:  %d\n", sum);
	printf("Evens: %d\n", even);
	printf("Largest: %d\n", max);

	return 0;
}
