#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
	int i, j, x, y, z, base, digit = 1;
	unsigned long wer;
	char tempt[100], ans[40000];
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	
	int m[100], n[100], sum[100];
	j = 0;
	for(i=1; i<=x; i*=10)
	{
		m[j] = (x/i)%10;
		j++;
	}
	if(digit < j)
		digit = j;
	j = 0;
	for(i=1; i<=y; i*=10)
	{
		n[j] = (y/i)%10;
		j++;
	}
	if(digit < j)
		digit = j;
	
	for(i=digit; i>=0; i--)
	{
		sum[i] = 0;
	}
	
	for(base=2; base<=36; base++)
	{
		for(i=0; i<digit; i++)
		{
			sum[i] = sum[i] + m[i] + n[i];
			if(sum[i] >= base)
			{
				sum[i+1]+=1;
				sum[i]-=base;
			}
		}
		if(sum[digit] != 0)
		{
			itoa(sum[digit], tempt, base);
			strcat(ans, tempt);
		}
		for(i=digit-1; i>=0; i--)
		{
			itoa(sum[i], tempt, base);
			strcat(ans, tempt);
		}
		wer = atoi(ans);
		if(wer == z)
		{
			printf("%d", base);
			return 0;
		}
	}
	printf("no");
	return 0;
}
