#include <stdio.h>
int main ()
{
	int num, ugly = 0, i, check;
	scanf("%d", &num);
	
	for(i=1; i<check; i++)
	{
		if(i%2 == 0||i%3 == 0||i%5 == 0)
		{
			ugly++;
		} else {
			while(i%2 != 0 && i%3 != 0 && i%5 != 0)
				ugly++;
		}
	}
	
	printf("%d", ugly);
}
