#include <stdio.h>

int main()

{
	int low, k;

	printf("Type a number: ");
	scanf("%d", &k);

	for(low=1; low<=k; low++)
		{
			printf("@", low);
		}
	printf("\nCountdown\n");

	for(low=k; low>=1; low--)
		{
			printf("%d\n", low);
		}

	return 0;
}
