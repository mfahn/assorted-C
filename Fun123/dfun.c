#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void roll(int a[], int n)
{
	int k, x;
	for(k=0; k<n; k++)
	{
		x=rand() % 10+1;
		a[k]=x;
	}
}
void printarray(int a[], int n)
{
	int x;
	for(x=0; x<n; x++)
	{
		printf("%d.  %d\n", x+1, a[x]);
	}
}
int sumarray(int a[], int n)
{
	int sum, r;
	sum=0;
	for(r=0; r<n; r++)
	{
		sum+= a[r];
	}
	return sum;
}
int freqarray(int a[], int n, int t)
{
	int x, k;
	x=0;
 	for(k=0; k<n; k++)
	{
		if(a[k]==t)
			x++;
	}
	return x;
}
int main()
{
	srand(150);
	int t, sum, y, a[50], n, x;
//roll
	roll(a, 50);
//print
 	printarray(a, 50);
//sum
	y=sumarray(a, 50);
	printf("Sum is %d\n", y);
//frequency
    printf("Which number 1 to 10 do you want to see: ");
    scanf("%d", &t);
	x=freqarray(a, 50, t);
	printf("There are %d\n", x);
	return 0;
}
