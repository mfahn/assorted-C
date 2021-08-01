#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
	int x=0;
	int count=0;

	srand(time(NULL));

	do
	{
		count++;
		x=rand()%100+1;
		printf("%d\n", x);
	}while(x!=33);

	printf("It took %d iterations to get 33\n", count);

	return 0;
}
