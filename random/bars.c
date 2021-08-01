#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()

{
   int dollar, star, count, x, bars, min, max;

   printf("Minimun size: ");
   scanf("%d", &min);
   printf("Maximum number: ");
   scanf("%d", &max);
   printf("How many bars: ");
   scanf("%d", &bars);
   srand(time(NULL));

   for(count=1; count<=bars; count++)
       {
           x=rand() % max +1;

           if(0 == x % 2)
           {
               printf("%d ", x);
               for(dollar=1; dollar<=x; dollar++)
                   {
                   printf("$");
                   }
               printf("\n");
           }
           if(0 != x % 2)
           {
               printf("%d ", x);
                   for(star=1; star<=x; star++)
                   {
                       printf("*");
                   }
               printf("\n");
           }
       }

return 0;
}
