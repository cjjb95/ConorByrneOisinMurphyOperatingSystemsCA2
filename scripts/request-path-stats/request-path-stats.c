#include <stdio.h>
#include "./request-path-stats.h"

int main()
{
	char input[255];
	char date[24];
	int i = 20;

	while(fgets(input, 255, stdin))
	{
		for(int t =0; t < i ;t++)
		{
			date[t] = input[t];
		}
		printf("%s\n",input); 
		printf("Date: %s\n", date);
	}
}
