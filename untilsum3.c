#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>
#include <unistd.h>


int main()
{
	int x, sum;
	srand(time(NULL));
	do
	{
		x=rand() % 20+1;
		sum=sum+x;
		printf("%d\n", x);
		usleep(40000);
	}while(sum<100);
	printf("Total is %d\n", sum);

	return 0;
}
