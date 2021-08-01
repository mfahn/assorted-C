#include <stdio.h>

int main()
{
	char let, start, end;

	start = 'Y';
	end = 'b';

	for (let=start; let<=end; let++  )
		printf("%c ", let);
	printf("\n");

	return 0;
}
