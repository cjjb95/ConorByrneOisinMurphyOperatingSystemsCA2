// Oisin Murphy - D00191700
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "./filter-by-ms.h"

#define LINE_LENGTH 255

void filter_by_ms() {
    char *line = (char*)malloc(LINE_LENGTH);     // char arr of length 512 to hold log line
    while(fgets(line, LINE_LENGTH, stdin)) {
        //136.171.109.49 2020-03-24T06:00:23.622Z "GET /favicon.ico HTTP/1.1" 200 1 "Mozilla/5.0 (Windows NT 6.1; WOW64; Trident/7.0; rv:11.0) like Gecko"
        // get substring after 6th space character

        // init temp line
        char *temp = (char*)malloc(LINE_LENGTH); 
        strcpy(temp, line); 

		char *space;
        uint8_t index;
        // cut through HTTP req by space until get response time
        for(uint8_t i = 0; i < 6; ++i) {    
            space = strchr(temp, ' ');
            strcpy(temp, space + 1);
        }
        // get num from temp substring
        char num[3];
        strncpy(num, temp, 2);
        strcat(num, "\0");
        
        // check if number at start of shortened string is > 5 -> will need to check for 1-2 chars
        if(atoi(num) >= 5) {
            //if 5 or greater, print out the original line
            printf("%s\n", line);
        }
    }
}


int main() {    
    filter_by_ms();
    return 0;
}