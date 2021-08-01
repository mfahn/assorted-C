#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getnum()
{
	int n;
	n=rand()%3+1;
	return n;
}

//int hasdups()
//{

//}

int main ()

{
	int x, z, y;

	srand(time(NULL));

	x=getnum();
	do
	{
		y=getnum();
		printf("another   %d\n", y);
	}while(x==y);
	do
	{
		z=getnum();
		printf("another2  %d\n", z);
	}while(x==z | y==z);

	printf("%d, %d, %d\n", x, y, z);

}
