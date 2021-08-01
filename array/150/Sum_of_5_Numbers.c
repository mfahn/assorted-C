#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>
#include <unistd.h>


int main()
{
	int x, y, z, a, b, sum;
	printf("Type a number: ");
	scanf("%d", &x);
	printf("Type a number: ");
	scanf("%d", &y);
	printf("Type a number: ");
	scanf("%d", &z);
	printf("Type a number: ");
	scanf("%d", &a);
	printf("Type a number: ");
	scanf("%d", &b);

	sum=x+y+z+a+b;
	printf("Sum is %d\n", sum);

	return 0;
}
