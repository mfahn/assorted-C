#include <stdio.h>
#include <time.h>

int main()

{
    int k;
	char string1[7], string2[7];

	printf("Enter 6 characters: ");
	scanf("%s", &string1);

	printf("Enter 6 more characters: ");
	scanf("%s", &string2);

	for(k=0; k<6; k++)
	{
		printf("%c", string1[k]);
		printf("%c", string2[k]);
	}
	printf("\n");
	return 0;
}

