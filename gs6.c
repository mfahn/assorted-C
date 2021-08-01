#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>


int main()
{
	int x, g=0, len;
	char a[50];
	printf("Type a string: ");
	fgets(a, 50, stdin);
	len=strlen(a)-1;
	a[len]='\0';
	printf("%s\n", a);

	for(x=0; x<len; x++)
	{
		if(a[x]=='g' || a[x]=='G')
			g++;
	}
	printf("There were %d Gs\n", g);

	return 0;
}
