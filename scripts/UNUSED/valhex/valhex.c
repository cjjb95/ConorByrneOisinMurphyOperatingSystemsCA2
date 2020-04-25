// Oisin Murphy - D00191700

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "./valhex.h"

void validate_hexcodes(int argc, char *filename[]) {
    // if(argc <= 1) {
    //     printf("Invalid or insufficient number of arguments. Please try again.\n");
    //     exit(1);
    // }
    // get file with name given in args


    // line by line, output
    char hexcode[10];
    while(fgets(hexcode, 10, stdin)) {
        
    }
    
    //printf("%s\n", filename[1]);



    // // only get 6 & 8 bit hex
    // uint8_t len = strlen(hexcode[1]);
    // if(len == 7 || len == 9) {
    //     // print hex
    //     printf("%s\n", hexcode[1]);
    // }
    // exit(0);
}

int main(int argc, char *argv[]) {
    validate_hexcodes(argc, argv);
    return 0;
}
