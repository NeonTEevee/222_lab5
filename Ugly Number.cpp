#include <stdio.h>
int main ()
{
	int num, ugly = 0, i, check = 0;
	scanf("%d", &num);
	
	for(i=1; check<num; i++)
	{
		while(i%2 != 0 && i%3 != 0 && i%5 != 0 && i != 1)
		{
			i++;
			while(i%7 == 0||i%11 == 0)
			{
				i++;
			}
		}
		ugly = i;
		check++;
	}
	printf("%d", ugly);
}
