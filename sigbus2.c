/*
* Test: SPARC/Solaris 8 64-bit kernel mode
* gcc -Wall -pipe -g -o sigbus2 sigbus2.c
*/
#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char * argv[] )
{
    unsigned int        i = 0x12345678;
    unsigned short int  j = 0x0000;

    j = *( ( unsigned short int * )( ( ( unsigned char * )&i  ) + 1 ) );
    return( EXIT_SUCCESS );
}  /* end of main */
