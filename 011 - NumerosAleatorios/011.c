#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	//Responsavem por alimentar o rand de forma diferente
	srand((unsigned) time(NULL));
	
	//Variavel que recebe o resto da divisao do numero 3
	int aleatorio = rand() % 3;
	
	int aleatorioSegundo = (rand() % 5) +1;
	//Imprimi o valor 
	printf("%d", aleatorio);
	printf("%d",aleatorioSegundo);
	return 0;
}
