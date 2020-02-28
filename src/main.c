/**
 * C-Language (gcc) Sample 
 * 
 * gcc main.c -o main
 */

#define __MAIN__    "__MAIN__"

// Includes
#include <stdio.h>
#include "./basictypes.h"

#ifdef __MAIN__

int main(char* argv, int argc) {
    printf("Hallo C-Language!\n");
    basictypes_main();
}

#endif