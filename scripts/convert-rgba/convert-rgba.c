// Oisin Murphy - D00191700

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "./convert-rgba.h"

// void convert_rgba(int argc, char *hexcode[]) {
//     if(argc <= 1) {
//         //printout here interferes with file inputs -> make a flag to enable / disable??
//         exit(1);
//     }
//     // convert 6 bit to rgba => append FF to the edn
//     uint8_t len = strlen(hexcode[1]);
//     if(len == 7) {
//         // print hex with FF appended
//         printf("%s\n", strcat(hexcode[1], "FF"));
//     }
//     else if(len == 9) {
//         // print already-rgba hex
//         printf("%s\n", hexcode[1]);
//     }
//     exit(0);
// }

void convert_rgba() {
    char hexcode[10];
    while(fgets(hexcode, 10, stdin)) {
        // convert 6 bit to rgba => append FF to the edn
        uint8_t len = strlen(hexcode[1]);
        if(len == 7) {
            // print hex with FF appended
            printf("rgba(%s,%s,%s,%s)\n", strcat(hexcode[1], "FF"));
        }
        else if(len == 9) {
            // print already-rgba hex
            printf("rgba(%s,%s,%s,%s)\n", strcat(hexcode[1], "FF"));
        }
    }
    exit(0);
}

int main() {
    convert_rgba();
    return 0;
}
