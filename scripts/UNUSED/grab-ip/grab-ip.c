// Oisin Murphy - D00191700

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "./grab-ip.h"

void grab_ip() {
    char line[255];     // char arr of length 255 to hold log line
    while(fgets(line, 255, stdin)) {
        // get index of first ' ' (space) -> that's the end of IP address
        char *space;
        int space_index;
        space = strchr(line, ' ');           // get pointer to first instance of space ' '
        space_index = (int)(space - line);   // get index of space from 0 in string

        //print substring of line -> from start to first space (IP)
        char ip[16];                        // ipv4 length -> 15 chars + ending char = 16
        memset(ip, '\0', sizeof(ip));       // fill with /0 to avoid issues later
        strncpy(ip, line, space_index);     // copy ip from line
        printf("%s\n", ip);                 // print out result
    }
}

int main() {
    grab_ip();
    return 0;
}