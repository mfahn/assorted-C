#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rept(int x, char h)
{
    int y;
    for(y=0; y<x; y++)
        printf("%c", h);
    printf("\n");
}

void reptonline(int x, char h)
{
    int y;
    for(y=0; y<x; y++)
        printf("%c", h);
    printf("\n");
}

void box(int rows, int columns)
{
	int x, y;
	for(x=0; x<rows; x++)
	{
		for(y=0; y<columns; y++)
		{
			printf("#");
		}
		printf("\n");
	}
}

void utri(int x )
{
	int y, z;
	for(y=0; y<x; y++)
	{
		rept(y, '#');
	}
}

void barChart(int count, int low, int high)
{
	int x, y, k;
	for(x=0; x<count; x++)
	{
		y=rand() % (high-low + 1) + low ;
		printf("%d", y);
		for(k=0; k<y; k++)
			printf("@");
		printf("\n");
	}
}

void dtri(int x )
{
    int y, z;
    for(y=x; y>0; y--)
    {
        for(z=0; z<y; z++)
            printf("$");
        printf("\n");
    }
}

void zigzag(int x)
{
	int k, s;
	for(k=0; k<x-1; k++)
	{
		for(s=0; s<k; s++)
			printf(" ");
		if(k==x)
			printf("*\n");
		else
		 	printf("*\n");
	}

    for(k=x; k>0; k--)
    {
        for(s=0; s<k-1; s++)
			printf(" ");
		if(k==x)
			printf("*%d\n", x);
		else
	        printf("*\n");
    }
}

int main()
{
        srand( time(NULL) );  // use srand(6) in sample output

        rept(20,'#');
        barChart( 9, 2, 11 );
        rept(20,'-');
        barChart( 4, 10, 15 );
        rept(20,'-');
        box(3, 3);
        rept(20,'-');
        box(5,7);
        rept(20,'-');
        utri(3);
        rept(20,'-');
        utri(5);
        rept(20,'-');
        dtri(3);
        rept(20,'-');
        dtri(5);
        rept(20,'#');
		zigzag(4);

        return 0;
}
