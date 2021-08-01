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

	if(x>y)
		printf("X is %d\n", x);
	else
		printf("Y is %d\n", y);
return 0;
}
