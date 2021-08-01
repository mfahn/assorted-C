#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{

	int x, y, answer, guess;
	int correct=0;
	int question;

	srand(time(NULL));

	//for(question=1; question<=5; question++)
	while(correct<=5)
	{
		x=rand() % 10+1;
		y=rand() % 10+1;

		answer=x+y;

		printf("%d + %d = ", x, y);
		scanf("%d", &guess);

		if(guess==answer)
			{
			printf("Correct\n");
			correct++;
			}
		else
			{
			printf("Sorry, answer was %d\n", answer);
			}
	}
	printf("%d correct answers\n", correct);
return 0;
}

