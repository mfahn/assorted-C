#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main ()

{
	int x, k, l;
	char s[21];

	srand( time(NULL) );

    for ( k = 0; k < 20; k++ )
        s[k] = ' ';
    s[20] = '\0';
    printf("|%s|\n", s);

	for(k=0; k<5; k++)
	{
		l =  rand() % 26  + 'a';
		x=rand() % 19+1;
 		s[x]=l;
	}
	printf("|%s|\n", s);

	return 0;
}
