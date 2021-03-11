#include <stdio.h>
#include <math.h>
int main ()
{
	int i, j, x, y, count, tempt, max = 0;
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
	
	tempt = pow(x-y+1, 2);
	int b[tempt];
	count = x-y+1;
	tempt = count;
	
	
}
