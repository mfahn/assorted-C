#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>


int main()
{
	char str[100];
	int len, x;
	printf("Type a string of characters: ");
	fgets(str, 100, stdin);
	len=strlen(str)-1;
    str[len]='\0';

	for(x=0; x<len; x++)
	{
		printf("%c\n", str[x]);
		usleep(60000);
	}
	return 0;
}
