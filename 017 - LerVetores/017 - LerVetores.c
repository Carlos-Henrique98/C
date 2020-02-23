#include <stdio.h>
#include <stdlib.h>
#define TAM 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vetor[TAM], cont;
	
	//Passando valores para o vetor
	vetor[0] = 5;
	vetor[1] = 10;
	vetor[2] = 15;
	vetor[3] = 20;
	
	//Imprimindo vetor em um laco de repeticao
	for(cont = 0; cont <= TAM; cont++)
	{
		vetor[cont] = vetor[cont] + 1;
	}
	
	printf("| Vetores |");
	//Exibindo os valores do vetor
	printf("\nPosicao 0: %d", vetor[0]);
	printf("\nPosicao 1: %d", vetor[1]);
	printf("\nPosicao 2: %d", vetor[2]);
	printf("\nPosicao 3: %d", vetor[3]);
	
	for(cont = 0; cont < TAM; cont++)
	{
		printf("\nPosicao %d : %d", cont, vetor[cont]);
	}
	
	for(cont = 0; cont < TAM; cont++)
	{
		scanf("%d", &vetor[cont]);
	}
	
	for(cont = 0; cont < TAM; cont++)
	{
		printf("\nPosicao %d : %d", cont, vetor[cont]);
	}
	
	return 0;
}
