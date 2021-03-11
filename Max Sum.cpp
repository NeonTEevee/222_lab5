#include <stdio.h>
int main ()
{
	int i, j, x, y, n, sqr, rangeH, rangeV, max = 0;
	scanf("%d", &x);
	scanf("%d", &y);
	
	int a[x][x];
	for(i=0; i<x; i++)
	{
		for(j=0; j<x; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	int b[(x-y+1)*(x-y+1)];

	sqr = 0;
	for(n=0; n<(x-y+1)*(x-y+1); n++)
	{
		rangeV = 0;
		rangeH = 0;
		for(i=sqr; i<x; i++)
		{
			for(j=sqr; j<x; j++)
			{
				b[n]+=a[i][j];
				rangeH++;
				if(rangeH == x-y+1)
					j=x;
			}
			rangeV++;
			if(rangeV == x-y+1)
				i=x;
		}
		sqr++;
		printf("B[%d] = %d\n", n, b[n]);
	}
}
