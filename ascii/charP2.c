#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int k;
	char let;
	srand(time(NULL));
	for(k=0; k<5; k++)
	{
		let = rand() % 26 + 'a';
		printf("%c ", let);
	}
	printf("\n");

	return 0;
}
