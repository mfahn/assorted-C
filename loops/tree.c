#include <stdio.h>
int main()
{
    int dash, d, row;

    printf("How many: ");
    scanf("%d", &dash);

    for(row=1 ; row<=dash ; row++)
    {
        printf("%3d ", row);
        for ( d = 0 ; d < row ; d++ )
        {
			if(d%2==1)
	            printf("$");
			else
				printf("*");
        }
        printf("\n");
    }

    return 0;
}

