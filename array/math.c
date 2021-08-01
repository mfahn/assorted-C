#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
	int a[10], b[10], c[10];
	int k, x;
	srand(time(NULL));
	for(k=0; k<10; k++)
	{
		a[k]=rand() % 20+1;
		b[k]=rand() % 20+1;
	}
//	for(k=0; k<10; k++)
	{
//		c[k] = a[k] + b[k];
	}

	for(k=0; k<10; k++)
	{
		if( a[k] < b[k] )
			printf("%d\n", b[k]);
		if( b[k] < a[k] )
			printf("%d\n", a[k]);
	}
	//for(k=0; k<10; k++)
	//	printf("%2d + %2d = %2d\n", a[k], b[k], c[k]);

	return 0;
}
