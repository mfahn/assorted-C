/*
Excel & C  : leet
Develop a spreadsheet to convert text from
   normal spelling to leet
*/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

// Utility function.
// Replace each  'in'  to 'out' in the string s
void replace( char s[], char in, char out )
{
	int x, len;
	len=strlen(s);
	for(x=0; x<len; x++)
	{
		if(s[x] == in)
			s[x] = out;
	}
}

void upperGen(char u[], int num)
{
	int x;
	for(x=1; x<=num; x++)
	{
		u[x]=rand() % 'Z' + 'A';
	}
	u[num]='\0';
}


int main()
{
	char orig[100], change[100], u[100];
	int len, k, num;
	char c, s;
	srand(time(NULL));

	fgets(orig,100,stdin);
	len = strlen(orig)-1;
	orig[len]='\0';
	strcpy(change,orig);
//second one goes into left one just like assinging statements like x=rand()%100+1;
	printf("-------------------------------------------------\n");
	replace(change, 'a', '@');
	replace(change, 's', '$');
	replace(change, 't', '+');
	replace(change, 'e', '3');
	replace(change, 'l', '1');
	printf("%s\n", change);
	printf("How many uppercase characters do you want: \n");
	scanf("%d", &num);
	printf("%s\n", u);

	return 0;
}
