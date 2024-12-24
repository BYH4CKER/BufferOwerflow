#include <stdio.h>
#include <string.h>

void vulnerable_function() {
    char buffer[64];
    printf("Bir şey girin: ");
    gets(buffer);
}

int main() {
    vulnerable_function();
    return 0;
}
