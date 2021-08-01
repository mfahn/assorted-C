#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main ()

{
	int r, k, box, total, sp;
	char s[21], n[21];
	srand(time(NULL));

	s[0]= '|';
	printf("%c", s[0]);

	for(k=0; k<6; k++)
	{
		box= rand() % 18 + 2;
		r = rand () % 'a' + 'z';
		s[box] = r;
		printf("%c", s[box]);
		n[k]=1;
	}
	for(k=0; k<21; k++)
	{
//can't figure out how to check if an array variable 
//has something in it and if it doesn't then put a space there 
			printf(" ", s);
	}
	s[20]='|';
	printf("%c\n", s[20]);

	return 0;
}
