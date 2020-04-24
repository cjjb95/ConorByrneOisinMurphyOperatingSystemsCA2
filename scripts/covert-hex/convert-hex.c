#include <stdio.h>
#include <math.h>
#include <string.h>
#include "./convertHex.h"

int main()
{
 convert_input();
 printf("\n");
}

 void convert_input()
 {

  char hex[4];
	while(fgets(hex,4,stdin))
	{
   		hex_to_decimal(hex);
  }
 }

int hex_to_decimal(char hex[])
 {
   int len = strlen(hex);
   int base = 1;
   int decimal = 0;

	for (int i=len-1; i>=0; i--)
	{
		if (hex[i] >= '0' && hex[i]<= '9')
		{
		 decimal += (hex[i] - 48) * base;
		 base = base * 16;
		}

		else if(hex[i]>= 'A' && hex[i]<= 'F')
    {
    	decimal += (hex[i] - 55)*base;
      base = base*16;
   	}
    else if(hex[i]>='a' && hex[i] <= 'f')
    {
      decimal +=(hex[i] - 87)*base;
      base = base*16;
    }
	}
	printf("%d, ", decimal);
	return decimal;
	}
