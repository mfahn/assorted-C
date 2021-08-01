#include <stdio.h>
 int main()

{
   int second, space, w, f, wide, high;

   printf("How high is the frame: ");
   scanf("%d", &high);
   printf("How wide is the frame: ");
   scanf("%d", &wide);
   second=wide+2;
   //top
   if(wide<=3)
   {
       for(f=0; f!=second; f++)
       {
           printf("#");
       }
       printf("\n");
   }
   if(wide>3)
   {
       for(f=0; f!=second; f++)
       {
       printf("#");
       }
       printf("\n");
   }
   //side
   for(w=0; w!=high; w++)
   {
       printf("#");
       for(space=0; space<wide; space++)
       {
           printf("-");
       }
       printf("#\n");
   }

   //bottom
   if(wide<=3)
   {
       for(f=0; f!=second; f++)
       {
           printf("#");
       }
       printf("\n");
   }

   if(wide>3)
   {
       for(f=0; f!=second; f++)
       {
           printf("#");
       }
   printf("\n");
   }
return 0;
}
