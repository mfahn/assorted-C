#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void print(int x, int y, char big[])
{
    int k;

    if(y==1)
    {
        big[74] = ' ';
    }
    if(y==2)
    {
        big[43] = ' ';
        big[105] = ' ';
    }
    if(y==3)
    {
        big[43] = ' ';
        big[74] = ' ';
        big[105] = ' ';
    }    
    if(y==4)
    {
        big[43] = ' ';
        big[51] = ' ';
        big[97] = ' ';
        big[105] = ' ';
    }
    if(y==5)
    {
        big[43] = ' ';
        big[51] = ' ';
        big[74] = ' ';
        big[97] = ' ';
        big[105] = ' ';
    }
    if(y==6)
    {
        big[43] = ' ';
        big[51] = ' ';
        big[70] = ' ';
        big[78] = ' ';
        big[97] = ' ';
        big[105] = ' ';
    }
    if(x==1)
    {
        big[60] = ' ';
    }
    if(x==2)
    {
        big[29] = ' ';
        big[91] = ' ';
    }
    if(x==3)
    {
        big[29] = ' ';
        big[60] = ' ';
        big[91] = ' ';
    }    
    if(x==4)
    {
        big[29] = ' ';
        big[37] = ' ';
        big[83] = ' ';
        big[91] = ' ';
    }
    if(x==5)
    {
        big[29] = ' ';
        big[37] = ' ';
        big[60] = ' ';
        big[83] = ' ';
        big[91] = ' ';
    }
    if(x==6)
    {
        big[29] = ' ';
        big[37] = ' ';
        big[56] = ' ';
        big[64] = ' ';
        big[83] = ' ';
        big[91] = ' ';
    }

    big[13] = ' ';
    big[40] = ' ';
    big[67] = ' ';
    big[94] = ' ';
    big[121] = ' ';

    for(x=0; x<135; x++)
    {
        printf("%c", big[x]);
        if(x==26||x==53||x==80||x==107||x==135)
        {
            printf("\n");
        }
    }
    printf("\n");
}
int main()
{
    int x, y;
    char big[135];
    for(x=0; x<135; x++)
    {
        big[x] = '#';
    }
    srand(time(NULL));
    x=rand() % 6+1;
    y=rand() % 6+1;
    printf("Dice 1: %d\nDice 2: %d\n", x, y);
    print(x, y, big);

    return 0;
}
