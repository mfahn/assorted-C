#include <stdio.h>

int main()

{
	char str[10];
	int k;

	printf("Enter a word, 4 chars: ");
	scanf("%s", str);

	printf("word is %s\n", str);

	for(k=0; k<4; k++)
	{
		printf("%c", str[k]);
	}

	printf("\n");

	for(k=1; k<4; k++)
	{
		printf("%c\n", str[k]);
	}

return 0;
}
