#Try the specified codes in a test or permitted environment.
#Compile the written C codes and write shellcode by detecting memory overflows in the appropriate environment.

#gcc -fno-stack-protector -z execstack -o stack stack.c
#./stack $(python3 -c 'print("A"*100)')

#These practices must be done for EACH instance and you need to disable some precautions.
