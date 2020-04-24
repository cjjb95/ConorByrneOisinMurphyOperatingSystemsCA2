// Conor Byrne - D00185566

#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <string.h>
#include "./convert-hex.h"

int main() {
 	hex_to_decimal();
	return 0;
}

int hex_to_decimal() {
	char hex[4];
	uint8_t base;
	uint8_t len;
	uint8_t decimal;
	_Bool started = 0;

	while(fgets(hex, 4, stdin)) {
		len 	=  strlen(hex);
		base 	=  1;
	    decimal =  0;

		// print commas before next number for better formatting @ end
		if(started) {
			printf(", ");
		}
		else {
			started = 1;
		}

		for (int i = len - 1; i >= 0; --i) {
			if (hex[i] >= '0' && hex[i]<= '9') {
				decimal += (hex[i] - 48) * base;
				base = base * 16;
			}
			else if(hex[i]>= 'A' && hex[i]<= 'F') {
				decimal += (hex[i] - 55)*base;
				base = base*16;
			}
			else if(hex[i]>='a' && hex[i] <= 'f') {
				decimal +=(hex[i] - 87)*base;
				base = base*16;
			}
		}
		printf("%d", decimal);
	}
	printf(".\n");	// End the printout
}
