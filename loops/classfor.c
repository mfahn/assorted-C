 #include <stdio.h>

int main()

{
int start, end;

	printf("Choose a number to start at: ");
	scanf("%d", &start);

	printf("Choose a number to end at: ");
	scanf("%d", &end);

	while(start>=end)
	{
		printf("%d\n", start);
		start=start-1;
	}
	while(start<=end)
	{
		printf("%d\n", end);
		end=end-1;
	}


return 0;

}
