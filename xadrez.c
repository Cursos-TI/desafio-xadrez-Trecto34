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

void cavalo(){
    int baixo = 2;
    int esquerda = 1;
    int i = 0;

    printf("-=CAVALO=-\n");
    while (i<baixo) {
        printf("Baixo, ");
        i++;
        if (i == 2) {
            for (int j = 0; j<esquerda; j++){
                printf("Esquerda\n");
            }
        }
    }
}

int main() {
    torre();
    bispo();
    rainha();
    cavalo();
    return 0;
}
