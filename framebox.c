#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()

{

	int x, len, input;
	char a[60];

	fgets(a, 60, stdin);
	len=strlen(a)-1;
	a[len]='\0';
	for(x=0; x<len+6; x++)
	{
		printf("*");
	}
	printf("\n");
	printf("** %s **", a);
	printf("\n");

	for(x=0; x<len+6; x++)
	{
		printf("*");
	}
	printf("\n");
	return 0;
}
