#include <stdio.h>

int main()
{
	char let, start, end;
	char junknl;
	printf("Where to start: ");
	scanf("%c", &start);
	scanf("%c", &junknl);
	printf("Where to end: ");
	scanf("%c", &end);
    scanf("%c", &junknl);

	for (let=start; let<=end; let++  )
		printf("%c ", let);
	printf("\n");

	return 0;
}
