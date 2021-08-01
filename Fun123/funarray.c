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

void printArray(int A[], int N)
{
	int k;
	for(k=0; k<N; k++)
		printf("%d ", A[k]);
	printf("\n");
}

int countOdd(int A[], int N)
{
	int k, odd=0;
	for(k=0; k<N; k++)
	{
		if(A[k] % 2 ==1)
			odd++;
	}
	return odd;
}

int main()
{
	char word[25];
	int numList[100];

	fillArr( numList, 75 );
	printf("First number: %d\n", numList[0]);
	printArray(numList, 10);

	int ans;
	ans=countOdd(numList, 10);
	printf("%d odd values in first 10 spots\n", ans);

	scanf("%s", word);
	backward( word );

	return 0;
}
