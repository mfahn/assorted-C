#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
	int c, flip;
	int H=0, T=0;
	int times=0;

	srand(time(NULL));

	printf("How many times would you like to flip: ");
	scanf("%d", &times);

	for(flip=1; flip<=times; flip++)
		{

		    c=rand()%2;

			if(c==0)
				{
					printf("Heads\n");
					H++;
				}
			else
				{
					printf("Tails\n");
					T++;
				}

		}

    printf("Tails: %d\n", T);
	printf("Heads: %d\n", H);

return 0;

}
