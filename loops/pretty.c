#include <stdio.h>
#include <unistd.h>
int main()
{
	int dash, d, row;

	printf("How many: ");
	scanf("%d", &dash);

	for(row=1 ; row<=dash ; row++)
	{
		if(row>=10)
			printf("%d ", row);
		else
			printf("%d  ", row);
		for ( d = 0 ; d < row ; d++ )
		{
			printf("$");
		}
		usleep(50000);
		printf("\n");
	}

	for ( row = dash-1 ; row >= 1 ; row-- )
	{
		if(row>=10)
			printf("%d ", row);
		else
			printf("%d  ", row);
		for(d=row; d>0; d--)
			printf("$");
		printf("\n");
		usleep(50000);
	}

	return 0;
}
