#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{

	int dice, player1, player2, score, turn;
	player1=0;
	player2=0;
	srand(time(NULL));
	score=0;

	do
	{
		dice=rand () % 6+1;
		printf("Player 1 roll is %d\n", dice);
		if(dice==1)
			{
			score=0;
			}
		printf("Do you want to roll again 1 for yes 2 for no: ");
		scanf("%d", &turn);
		if(turn==1)
			{
		        dice=rand () % 6+1;
	    	    printf("Player 1 roll is %d\n", dice);
    	    	if(dice==1)
					{
					score=0;
					}
			}

		player1=player1+score;
		score=0;

	}while(player1<=50 || player2<=50);

	if(player1<player2)
		{
		printf("Player 2 wins\n");
		}

	if(player1<player2)
	    {
    	printf("Player 2 wins\n");
    	}

return 0;
}
