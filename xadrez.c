#include <stdio.h>

void torre() {
    printf("-=Torre=-\n");
    for (int i = 0; i<5; i++){
        printf("Direita\n");
    }
}

void bispo() {
    printf("-=Bispo=-\n");
    for (int i = 0; i<5; i++){
        printf("Cima, direita\n");
    }
}

void rainha() {
    printf("-=Rainha=-\n");
    for (int i = 0; i<8; i++){
        printf("Esquerda\n");
    }
}

int main() {
    torre();
    bispo();
    rainha();
    return 0;
}
