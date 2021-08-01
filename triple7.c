#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>


int triple(int x)
{
	int t;
	t=x*3;
	return t;
}
int main()
{
	int x, y;
	printf("Type a number: ");
	scanf("%d", &x);
	y=triple(x);
	printf("%d\n", y);
	return 0;
}
