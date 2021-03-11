#include <stdio.h>
int main ()
{
	int i, j, x, y, n, p, q, rangeH, rangeV, max = 0;
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
	for(i=0; i<=(x-y+1)*(x-y+1); i++)
		b[i] = 0;

	p = 0;
	q = 0;
	for(n=0; n<(x-y+1)*(x-y+1); n++)
	{
		rangeV = 0;
		for(i=p; i<x; i++)
		{
			rangeH = 0;
			for(j=q; j<x; j++)
			{
				b[n]+=a[i][j];
				printf("B[%d] += a[%d][%d]\n", n, i, j);
				rangeH++;
				if(rangeH == y)
					j=x;
			}
			rangeV++;
			if(rangeV == y)
				i=x;
		}
		printf("B[%d] = %d\n", n, b[n]);
		if(q<x-y) {
			q++;
		} else {
			p++;
			q = 0;
		}
	}
	
	for(i=0; i<(x-y+1)*(x-y+1); i++)
	{
		if(max < b[i])
			max = b[i];
	}
	
	printf("%d", max);
}
