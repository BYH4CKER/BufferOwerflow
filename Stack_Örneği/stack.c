#include <stdio.h>
#include <string.h>

void vulnerable_function(char *input) {
    char buffer[64];
    strcpy(buffer, input); // Güvensiz strcpy kullanımı, sakıncalı bir kullanım.
}

int main(int argc, char *argv[]) {
    if (argc > 1) {
        vulnerable_function(argv[1]);
    } else {
        printf("Kullanım: %s <giriş>\n", argv[0]);
    }
    return 0;
}
