#include <stdio.h>

void tree()
{
	int x, y, t, s, k, h;
	printf("How tall: ");
	scanf("%2d", &h);
	if(h<3 | h>30)
		h=4;
	if(h>10)
		t=3;
	else
		t=2;
//tree
	for(y=0; y<h; y++ )
	{
		for(k=s-1; k>0; k--)
	     	printf(" ");
		for(s=1; s=0; x=x+2)
 		{
			printf("*");
		}
		printf("\n");
	}
//stump

}
int main()
{
	int h;
	tree();
	return 0;
}
