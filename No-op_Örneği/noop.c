#include <stdio.h>
#include <string.h>

char shellcode[] =
    "\x31\xc0\xb0\x01\x31\xdb\xcd\x80"; // Shellcode örneği

void vulnerable_function() {
    char buffer[64];
    printf("Bir şey girin: ");
    gets(buffer);
}

int main() {
    vulnerable_function();
    return 0;
}
