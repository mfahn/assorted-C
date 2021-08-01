#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

int main ()
{
    int before1=1, before2=0, count=0, a[100], fib;
    //note this will go forever
    while(before1)
    {
        printf("Number 1: %d     Number 2: %d     Total: %d\n", before1, before2, before1 + before2);
        before1++;
        before2++;
    }

    return 0;
}


