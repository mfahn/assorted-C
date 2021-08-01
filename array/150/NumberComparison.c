#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>

int main()
{
	int x, k, y;
	srand(time(NULL));
	x=rand() % 100+1;
	y=rand() % 100+1;
	printf("Number 1 is %d and Number 2 is %d\n", x, y);

	if(x>y)
		printf("Number 1 is greater than number 1\n");
	else
		printf("Number 2 is greater than number 1\n");
	return 0;
}
