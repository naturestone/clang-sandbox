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

/**
 * Hauptprogramm main()
 */
int main(char argv[], int argc) {

    // Einfache Ausgabe einer Zeichenkette
    printf("HELLO C-Language!\n");

    // Aufruf einer Funktion aus Modul basictypes.h
    basictypes_main();

    // Return value
    return 0;
}

#endif