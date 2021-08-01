#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
	int k, a[50], sum=0, even=0;

	for(k=0; k<50; k++)
	{
		a[k] = rand() % 50+1;
	}

    for(k=0; k<50; k++)
	{
		printf("%d ", a[k]);
	}
	printf("\n");

    for(k=0; k<50; k++)
		sum=sum+a[k];
	printf("Total is %d\n", sum);

	for(k=0; k<50; k++)
	{
		if( 0 == a[k] % 2 )
			even++;
	}
	printf("%d is an even number\n", even);

	return 0;
}
