#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main() {
    char *heap_buffer = malloc(16);
    printf("Bir şey girin: ");
    gets(heap_buffer); // güvensiz kullanım
    printf("Girdiniz: %s\n", heap_buffer);
    free(heap_buffer);
    return 0;
}
