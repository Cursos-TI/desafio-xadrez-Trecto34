#include <stdio.h>

void torre(int num_move){
    if (num_move <= 0){
        return;
    }
    printf("Direita\n");
    torre(num_move - 1);
}

void bispo(int num_move) {
    if (num_move <= 0){
        return;
    }

    for (int i = 0; i<1; i++){
        printf("Cima, ");
        for (int j = 0; j<1; j++){
            printf("Direita\n");
        }
    }
    bispo(num_move - 1);
}

void rainha(int num_move) {
    if (num_move <= 0){
        return;
    }
    printf("Esquerda\n");
    rainha(num_move -1);
}

void cavalo(){
    int baixo = 2;
    int esquerda = 1;

    for (int i=0, j=0; i<baixo || j<esquerda;) {
        if (i < 2){
            printf("Cima\n");
            i++;
        } else if (j < 1) {
            printf("Direita\n");
            j++;
        }
    }
}

int main() {
    printf("-=TORRE=-\n");
    torre(5);

    printf("-=BISPO=-\n");
    bispo(5);
    printf("-=RAINHA=-\n");
    rainha(8);

    printf("-=CAVALO=-\n");
    cavalo();
    return 0;
}
