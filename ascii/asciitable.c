#include <stdio.h>

int main()

{
	int x;
	int k;
	char c;

	c='B';
	printf("%c\n", c);
	printf("%d\n", c);

	x=66;
	printf("%d\n", x);

	for(k=30; k<127; k++)
		printf("%3d: %c\n\n", k, k);


	return 0;
}
