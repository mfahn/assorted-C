#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <strings.h>

int roll( int side)
{
	int x;
	if(sides>50 | sides<1)
		printf("4\n");
	x=rand()%sides+1;
	return x;
}

void rept()
{
	char h;
	int x, y;
	for(y=0; y<x; y++)
		printf("%c", h);
	printf("\n");
}

int isvowel(char l)
{
	int y=0;
	if(l>='a') l -= 32;
	if(l=='A' | l=='E' | l=='I' |l=='O' | l=='U')
		y++;
	return y;
}

char tograde(int num)
{
	if(num<=100 && num>=90)
		return 'A';
	if(num<90 && num>=80)
		retur "B";
	if(num<80 && num>=70)
		return "C";
	if(num<70 && num>=60)
		return "D";
	if(num<60 && num>=0)
		return "F";
	if(num<0 | num>100)
		printf("? Enter MATh 101\n");
	return num;
}

int fullcartons()
{
	int eggs, box;
	box=eggs/12;
}

int main()
{
	int l, y;
	srand(time(NULL));
//	dice roll
	printf("Pick a dice count: ");
	scanf("%d", &sides);
	l=roll(x);
	roll();
	printf("You rolled %d\n", x);
//	rept
    printf("Type a symbol: ");
    scanf(" %c", &h);
    printf("How many times do you want it: ");
    scanf("%d", &x);
	rept();
// is it a voewl
    printf("Type an uppercase letter: ");
    scanf(" %c", &l);
    printf("\n");
	y = isvowel();
	if(y==1)
		printf("The letter %c is a vowel\n", l);
	else
		printf("The letter %c is not a vowel\n", l);
//	Grader
    printf("Enter a test score: ");
    scanf("%d", &num);
	x=tograde(num);
	printf("Your grade is %c\n", x);
// Eggs
	fullcartons();
    printf("How many eggs are there: ");
    scanf("%d", &eggs);
    box=eggs/12;
    printf("There are %d full egg cartons\n", box);
	return 0;
}
