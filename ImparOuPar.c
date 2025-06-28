// usuário um número inteiro e diga se ele é par ou ímpar.
int main () {
    int numero[8];
    int i;
    for (i = 0; i < numero; i++) {
        printf("digite um numero %d", i + 1);
        scanf("%d", &numero[i]);

        if (numero[i] % 2 == 0 ) {
            printf("o numero %d é par \n", &numero[i]);
            scanf("%d", [i]);
        } else {
            printf("o numero %d é impar ", &numero[i]);
            scanf("%d", [i]);
        }
        
    }
    return 0;
}
