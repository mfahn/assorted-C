#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printdashes(int many)
{
    int k;
    for(k=0; k<many; k++)
        printf("-");
    printf("\n");
}

//dice roll
int roll()
{
    int x;
    x = rand () % 6+1;
    return x;
}

//count up to  a number
void count_to_N(int high)
{
    int k;
    for(k=1; k<=high; k++)
        printf("%d ", k);
    printf("\n");
}

//multiply
int multiply()
{
    int a, b, c;
    a=rand() % 9+1;
    b=rand() % 9+1;
    c=b*a;
    return c;
}

int main ()

{
    int x, c, d1, d2;
    srand(time(NULL));

    count_to_N(5);
    x=roll();
    d1=roll();
    printf("You rolled %d\n", x);
    printdashes(x);
    c=multiply();
    printf("Total is %d\n", c);
    printdashes(x);
    return 0;
}

