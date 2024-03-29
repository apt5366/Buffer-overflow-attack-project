•	Implemented Buffer Overflow attacks as part of an assignment, including advanced techniques like heap overflows, shell code injection, and return-oriented programming (ROP).
•	Explored Buffer Overflow attacks by invoking shared functions with arguments sourced from different memory locations, including injected values or hardcoded strings within the code.
•	Progressed to advanced attack strategies such as heap overflows, shell code injection, and return-oriented programming.
•	Utilized ROPgadget tool to extract gadgets from target binaries, for constructing ROP chains combining shared library functions and executable code gadgets.
•	Successfully demonstrated vulnerabilities within target systems through Buffer Overflow attacks.
•	Employed advanced techniques to exploit system weaknesses and showcase potential security risks.
•	Constructed intricate ROP chains to enhance attack efficiency and robustness.



In this assignment, you will produce Buffer overflow attacks. First, you learn some attacks that invoke
shared functions with arguments obtained from different places in memory (injected by you, or from
the hard coded strings in the code etc). Then you will try out other advanced attacks including heap
overflows, shell code injection and return oriented programming attacks.

In the attacks that demand return oriented programming, we will use a tool called ROPgadget to
extract gadgets from target binaries. The ROP attack combines shared library functions and ROP
gadgets from the executable code to invoke more powerful and robust attack.
