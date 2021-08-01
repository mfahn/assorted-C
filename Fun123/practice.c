#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//print dashes
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
//check if is positive
	int ispositive(int num)
	{
		if(num>=0)
			return 2;
		else
			return 1;
	}
//actual
	int main ()
	{
	    int x, d1, d2, num;

		printdashes(15);
		for(x=0; x<3; x++)
		{
			d1=roll();
			printf("%d ", d1);
		}
		printdashes(15);

		do
		{
			scanf("%d", &num);
		}while(!ispositive(num));

		d2=ispositive(num);

		if(d2==2)
			printf("%d is positive\n", num);
		else
			printf("%d is negative\n", num);
		printdashes(15);

	    return 0;
	}

//	sayHi();
//	val=getNum();
//	num=getNum();
//	x=getNum();
