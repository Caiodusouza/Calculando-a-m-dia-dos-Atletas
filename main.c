#include <stdio.h>
#include <stdlib.h>

int main() {
    float altura[10];
    int contador;
    float soma = 0.0, media;

    for (contador = 0; contador < 3; contador++) {
        printf("%d. Informe a altura: ", contador + 1);
        scanf("%f", &altura[contador]);
        soma += altura[contador];
    }

    media = soma / 3; // Média para 3 atletas
    printf("Média: %.2f\n", media);

    printf("\nAtletas que têm altura maior que a média:\n");
    for (contador = 0; contador < 3; contador++) {
        if (altura[contador] > media) {
            printf("%d. Altura é %.2f\n", contador + 1, altura[contador]);
        }
    }

    return 0;
}
