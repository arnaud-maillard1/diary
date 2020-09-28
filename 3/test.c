#include <stdio.h>

int main() {
    unsigned int bar = 48932; // Entier non signé (pas de bit de signe)
    signed int foo = -42; // Entier signé en complément à deux

    printf("%u\n", bar); // %u (non signé)
    printf("%d\n", foo); // %d (signé)
}
