#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getnum(nums[])
{
	int n, num[5];
	n=rand()%3+1;

	return n;
}

int countfreq(int a[], int n, int t)
{
	int k, count=0;
	for(k=0; k<n; k++)
	{
		if(a[k]==t)
			count++;
	}
}

int hasdups(int a[], int n)
{
	int val, many;

	for(val=0; val<1000000; val++)
	{
		many=countfreq(a, n, val);
		if(many>0)
			return 1;
		else
			return 0;
	}
}

int main ()

{
	int nums[]={8, 4, 2, 7, 4, 11};
	int x, z, y, k;
	int try =0;

	srand(time(NULL));

	do
	{
	try++;
	printf("%d)\n", try);
	for(k=0;k<5; k++)
		nums[k]=getnum();
	for(x=0; x<5; k++)
		printf("%d\n", nums[k]);
	if(hasdups(nums, 5) ==1)
		printf("duplicates\n");
	else
		printf("no duplicates\n");
	}while(hasdups(nums, 5)==1);

	return 0;
}
