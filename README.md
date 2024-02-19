In this assignment, you will produce Buffer overflow attacks. First, you learn some attacks that invoke
shared functions with arguments obtained from different places in memory (injected by you, or from
the hard coded strings in the code etc). Then you will try out other advanced attacks including heap
overflows, shell code injection and return oriented programming attacks.

In the attacks that demand return oriented programming, we will use a tool called ROPgadget to
extract gadgets from target binaries. The ROP attack combines shared library functions and ROP
gadgets from the executable code to invoke more powerful and robust attack.
