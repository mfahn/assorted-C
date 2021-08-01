#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()

{
    int k;
	char string[6];

	printf("Type 5 letters: ");
	fgets(string, 6, stdin);

	for(k=0; k<5; k++)
	{
		printf("%c\n", string[k]);
		usleep(50000);
	}
	printf("\n");
	for(k=4; k>=0; k--)
	{
		printf("%c\n", string[k]);
		usleep(50000);
	}
	printf("Your string is %s\n", string);

	return 0;
}

