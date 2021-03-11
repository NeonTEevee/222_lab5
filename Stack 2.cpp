#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
	int i = 1, j, terms, num;
	scanf("%d", &terms);
	
	char input[10*terms];
	scanf(" %[^\n]", input);
	
	int stack[terms];
	char *token = strtok(input, " ");
	for(j=0; j<terms; j++) {
		if(strcmp(token, "+") == 0)
		{
			i--;
			num = stack[i-1] + stack[i];
			stack[i] = 0;
			stack[i-1] = num;
		} else if (strcmp(token, "-") == 0) {
			i--;
			num = stack[i-1] - stack[i];
			stack[i] = 0;
			stack[i-1] = num;
		} else if (strcmp(token, "*") == 0) {
			i--;
			num = stack[i-1] * stack[i];
			stack[i] = 0;
			stack[i-1] = num;
		} else {
			stack[i] = atoi(token);
			i++;
		}
		token = strtok(NULL, " ");
	}
	printf("%d", num);
	return 0;
}
