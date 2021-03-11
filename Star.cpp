#include <stdio.h>
int main ()
{
	int num, star, i, j, k = 0, l, dashL, dashR;
	scanf("%d", &num);
	
	if(num%2 == 0)
		star = num - 1;
	if(num%2 == 1)
		star = num;
	
	if(num%2 == 1) {
		l = num/2;
	} else {
		l = num/2 - 1;
	}
	for(i=num; i>0; i--)
	{
		if(k<num/2)
		{
			dashR = (star/2) + 1 + k;
			dashL = (star/2) + 1 - k;
		} else {
			dashR = (star/2) + 1 - l;
			dashL = (star/2) + 1 + l;
		}
		for(j=star; j>0; j--)
		{
			if(j == dashL || j == dashR) {
				printf("*");
			} else {
				printf("-");
			}
		}
		if(k<num/2){
			k++;
		} else {
			l--;
		}
		printf("\n");
	}
}
