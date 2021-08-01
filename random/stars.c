#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()

{

	int sp, k, r, line;
	line=0;
	srand(time(NULL));

		while(line<70)
		{
			for (k=0; k<30; k++)
			{
				sp=rand() % 140 + 1;
				for(r=0; r < sp; r++)
				printf(" ");
				printf("*");

			printf("\n");
			usleep(60000);
			}
		}

return 0;
}

