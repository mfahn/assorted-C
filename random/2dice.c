#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
	int x, y, roll, pairs, s7;

	srand(14);

	roll=0;
	s7=0;
	pairs=0;

	for(roll=1; roll<=10; roll++)
	{
		x=rand() % 6+1;
		y=rand() % 6+1;
		printf("%d, %d\n", x, y);
		if(x+y==7 )
			{
			s7++;
			}
	}

	if(x=y)
		{
		pairs++;
		}

	printf("Seven: %d\n", s7);
	printf("Pairs: %d\n", pairs);


return 0;
}
