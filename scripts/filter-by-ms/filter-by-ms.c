// Oisin Murphy - D00191700
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "./filter-by-ms.h"

void filter_by_ms() {
    char line[512];     // char arr of length 512 to hold log line
    while(fgets(line, 512, stdin)) {
        //136.171.109.49 2020-03-24T06:00:23.622Z "GET /favicon.ico HTTP/1.1" 200 1 "Mozilla/5.0 (Windows NT 6.1; WOW64; Trident/7.0; rv:11.0) like Gecko"
        // get substring after 6th space character
        char temp[512]; 
		char *spc_ptr;
        uint16_t index;
        strcpy(temp, line); // init temp line
        for(uint8_t i = 0; i < 6; ++i) {    // cut through HTTP req by space until get response time
            spc_ptr = strchr(temp, ' ');
            strcpy(temp, spc_ptr + 1);
            strcat(temp, "\0");
        }
        // get num from temp substring
        char num[3];
        strncpy(num, temp, 2);
        strcat(num, "\0");
        
        // check if number at start of shortened string is > 5 -> will need to check for 1-2 chars
        if(atoi(temp) >= 5) {
        	//if 5 or greater, print out the original line
        	printf("%s\n", line);
		}
    }
}

int main() {    
    filter_by_ms();
    return 0;
}