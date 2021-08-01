#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>

int main()
{
	int k, z, y;
	char x;
	srand(time(NULL));

	for(k=0; k<3; k++)
	{
		x=rand() % 26 + 'a';
		printf("%c,", x);

		y=rand () % (25-10+1)+10;
		printf("%d,", y);
		y=rand () % (25-10+1)+10;
		printf("%d,", y);
		y=rand () % (25-10+1)+10;
		printf("%d\n", y);
	}
}
