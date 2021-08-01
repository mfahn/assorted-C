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
		let='a';
		for ( k = 1; k <= j; k++  )
		{
			printf(" %c", let);
			let++;
		}
		printf("\n");
	}
	return 0;
}
