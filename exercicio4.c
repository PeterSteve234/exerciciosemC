#include <stdio.h>

int main() {
    int armazenar = 5;
    int numerodigitado[5];

    for (int i = 0; i < armazenar; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numerodigitado[i]);
    }

    printf("Numeros armazenados: ");
    for (int i = 0; i < armazenar; i++) {
        printf("%d ", numerodigitado[i]);
    }
    printf("\n");

    return 0;
}
