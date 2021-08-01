#include <stdio.h>

int main()

{
	int x, many, p, n, q, thresh, a, b, diff;
	printf("How many times to run: ");
	scanf("%d", &many);
	printf("How big is the threshold: ");
	scanf("%d", &thresh);

	for(x=0; x<=many; x++)
	{
		scanf("%d %d", &a, &b);
		diff=a-b;
		printf("%3d %3d  ", a, b);
		if(diff>thresh)
		{
			printf("Pos\n");
			p++;
		}
		else if(diff<-thresh)
		{
			printf("Neg\n");
			n++;
		}
		else
		{
			printf("????\n");
			q++;
		}
	}

	printf("pos %d, neg %d, other %d\n", p, n, q);
	return 0;
}
