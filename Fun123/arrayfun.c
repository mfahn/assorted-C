#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fillArr( int A[], int N )
{
	int k, x;
	for (k = 0; k < N; ++k)
		A[k] = rand() % 50;
}

void backward( char str[] )
{
	int k, len;
	len = strlen( str );
	for ( k = len-1; k >= 0; k-- )
		printf("%c", str[k]);
	printf("\n");
}

int main()
{
	char word[25];
	int numList[25];

	fillArr( numList, 10 );
	printf("First number: %d\n", numList[0]);

	scanf("%s", word);
	backward( word );

	return 0;
}
