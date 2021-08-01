#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

void for15()
{
	int x, y;
	for(x=1; x<=5; x++)
	{
		printf("%d\n", x);
	}
	for(x=5; x>0; x--)
	{
		printf("%d\n", x);
	}
}
void while15()
{
	int x=1, y=5;
	while(x<=5)
	{
		printf("%d\n", x);
		x++;
	}
	while(y>0)
	{
		printf("%d\n", y);
		y--;
	}
}
void do15()
{
	int x=1, y=5;
	do
	{
		printf("%d\n", x);
		x++;
	}while(x<=5);
	do
	{
		printf("%d\n", y);
		y--;
	}while(y>0);
}

int main()
{
	for15();
	while15();
	do15();

	return 0;
}
