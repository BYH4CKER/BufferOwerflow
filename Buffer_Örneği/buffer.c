#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];
    printf("Bir şey girin: ");
    gets(buffer); // güvensiz gets() fonksiyonu
    printf("Girdiniz: %s\n", buffer);
    return 0;
}
