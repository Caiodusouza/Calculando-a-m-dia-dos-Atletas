#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	float altura [10];
	int contador;
	float soma, media;
	
	for (contador=1; contador<=3; contador++){
		
		printf("%d informe a altura: ", contador);
		scanf("%f", &altura[contador]);
		
		soma = (soma + altura [contador]);
		
	}
	media = soma/contador;
	printf("media: %.2f /n", media);
	
	printf("/n atletas que tem altura maior que a media /n");
	
	for (contador=1; contador <=3; contador++){
		
		if (altura[contador] > media)
		printf ("%d altura eh %.2f /n", contador, altura[contador]);
	}
	
}

