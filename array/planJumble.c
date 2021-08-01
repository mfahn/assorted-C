#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
	char str1[50];
	int k, len;

	printf("Enter string\n");
	fgets(str1, 50, stdin);
	printf("You entered %s\n", str1);

	len=strlen(str1);

	for(k=0; k<len; k++)
	{
		if(str1[k]!= ' '){
			printf("_ ");
			}
		else{
			printf("  ");
		}
	}
	printf("\n");

	return 0;
}
