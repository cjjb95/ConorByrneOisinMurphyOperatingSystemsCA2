// Oisin Murphy - D00191700

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
//#include 

void grab_ip(int argc, char *line[]) {
    if(argc <= 1) {
        //printf("Invalid or insufficient number of arguments. Please try again.\n");
        exit(1);
    }
    // get index of first ' ' (space) -> that's the end of IP address
    char *space;
    int space_index;
    space = strchr(line[1], ' ');           // get pointer to first instance of space ' '
    space_index = (int)(space - line[1]);   // get index of space from 0 in string

    //print substring of line -> from start to first space (IP)
    char *ip[16];                       // ipv4 length -> 15 chars + ending char = 16
    memset(ip, '\0', sizeof(ip));       // fill with /0 to avoid issues later
    strncpy(ip, line[1], space_index);  // copy ip from line
    printf("%s\n", ip);                 // print out result
    
    exit(0);
}

int main(int argc, char *argv[]) {
    grab_ip(argc, argv);
    return 0;
}
