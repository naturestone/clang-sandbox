/**
 * C-Language (gcc) Sample 
 * 
 * Programm übersetzen (gcc):
 *   gcc main.c basictypes.c -o main
 */

// Includes
#include <stdio.h>

// Präprozessoranweisung: Modul
#ifndef __MODULE__

// Include only one module
#include "./basictypes.h"

// Einfache Datentypen
char c = 'A';
int i = 0;
float pi = 3.14156;

// Zeichenkette ist kein Basistyp, sondern Array-of-Chars oder char[] oder char* mit Null-Byte am Ende.
char text[] = "Eine Zeichenkette";

// Variable ptext ist ein Zeiger (Pointer) auf char
char *ptext = text;

// Hauptfunktion des Moduls
int basictypes_main() {
    printf("Modul: %s \n", __MODULE__ );
    printf("Char als Dezimalwert: %d\n", c);
    printf("Char als Zeichen: %c \n", c);
    printf("Char als Binärcode: 0x%X \n", c);
    printf("Zeichenkette: %s \n", ptext);
    printf("Zeichen 5 aus Zeichenkette: %c \n", text[5]);
    printf("Zeiger auf Anfang der Zeichenkette: %p \n", text);
    printf("Zeiger auf 5. Zeichen der Zeichenkette: %p \n", &text[5]);
}

#elif
#error Ein anderes Modul ist bereits geladen
#endif

// Präprozessoranweisung: Hauptprogramm
#ifdef __MAIN__

int main(char* argv, int argc) {
    printf("This is a module, no application!");
}

#endif