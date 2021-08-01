#include <stdio.h>

int main()
{
	int high, j, k;
	char let;

	printf("how high: ");
	scanf("%d", &high);

	let = 'a';

	for ( j = 1; j <= high; j++ )
	{
		for ( k = 1; k <= high; k++  )
			printf(" %c", let);
			printf("\n");
		let++;
	}
	return 0;
}
