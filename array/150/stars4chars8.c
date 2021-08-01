#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

void string(char x[])
{
	int k, len;
	len=strlen(x)-1;
	x[len]='\0';

	for(k=0; k<len; k++)
	{
		if(x[k]>='a' && x[k]<='z' || x[k]>='A' && x[k]<='Z')
			x[k]='*';
	}
	printf("%s\n", x);
}
int main()
{
	char x[50];
	printf("Type a string: ");
	fgets(x, 50, stdin);
	string(x);

	return 0;
}
