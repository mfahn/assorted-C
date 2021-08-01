#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str1[50], str2[50],str3[50];
	int k,h,p, compare, len, len1;
    int slen,r,r2;
    char t1,t2;

//Part 1

	printf("What is the phrase? ");
	fgets(str1, 50, stdin);
	len = strlen(str1);
	str1[len-1] = '\0';

	for(k = 0; k < 30; k++)
		printf("\n");

//Part 2

	len1 = strlen(str1);

	for (k = 0; k < len1; k++){
	if (str1[k] != ' '){
		printf("_ ");
}
	else{
		printf("  ");
}
}
	printf("\n");
	strcpy(str3,str1);

//Part 3
	p=0;
	for(k=0; k<len; k++)
	{
		if(str1[k]!=' ')
		{
			str3[p]=str1[k];
			p++;
		}
	}
	str3[p]='\0';

//Part 4 <the best one
    slen = strlen(str3);
    for(k=0;k<slen;k++)
    {
        r=rand() % slen;
        r2=rand() % slen;
        t1=str3[r];
        t2=str3[r2];
        str3[r]=t2;
        str3[r2]=t1;

    }
    printf("%s\n",str3);

//Part 5
	printf("Yiggity yo, what's your guess for this BOMB SWOOGITY puzzle?    ");
	fgets(str2, 50, stdin);

	len = strlen(str2);
	str2[len-1] = '\0';

	compare = strcmp(str1, str2);

	if(compare == 0)
		printf("WooOOooOOooooooOooOOOoooOWOoooOOooOOOoooOoOWOooo0oow, you did it!\n");
	else
		printf("wow... you dumb as heck, it was: %s\n", str1);

	return 0;
}
