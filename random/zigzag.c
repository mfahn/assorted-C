#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()

{
   int k, count, zigs, num, x, y;
   printf("How many: ");
   scanf("%d", &count);
   printf("Max size: ");
   scanf("%d", &zigs);
   srand(time(NULL));

   for(y=0; y<=count-1; y++)
   {
       num=rand () % zigs+1;
       for(k = 0; k < num; k++)
       {
           for(x = 1; x <= k; x++)
           {
               printf(" ");
           }
           if(k == (num-1))
           {
               printf("*%d\n", num);
           }
           else
           {
               printf("*\n");
           }
		usleep(50000);
       }
       for(k = num-2; k > 0; k--)
       {
           for(x = k; x > 0; x--)
           {
               printf(" ");
           }
           printf("*\n");
        usleep(50000);
       }
   }
return 0;
}
