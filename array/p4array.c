#include <stdio.h>
#include <string.h>

int main()

{
	char str[25];
	int k, len;

	printf("Enter a word: ");
	scanf("%s", str);

	printf("word is %s\n", str);

	len=strlen(str);

	for(k=0; k<len; k++)
	{
		printf("%c", str[k]);
	}

	printf("\n");

	for(k=1; k<len; k++)
	{
		printf("%c\n", str[k]);
	}

return 0;
}
