#include <stdio.h>

int main()

{
	int k;
	char sym;

	//read ina character
	printf("Enter a character: ");
	scanf("%c", &sym);

	//test
	printf("Your character is an %c\n", sym);

	//print out the next one
	printf("Next is %c\n", sym+1);

	//if letter is lowercase
	//do not say this   if(sym>= '97' && sym<='122')
	if(sym>= 'a' && sym<='z')
		printf("Is lowercase\n");
	else
		printf("Not lowercase\n");

	return 0;
}
