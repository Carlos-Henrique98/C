#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//inteiros = %d
	//\n = pula linha
	
	int a = 5, b;

	printf("%d\n ", a);
	
	printf("O valor de a é: %d",a);
	
	//Definindo um novo valor para variavel a
	a = 15;
	
	printf("\nA = %d \n", a);
	
	//Excrevendo na tela
	scanf("\n%d", &b);
	
	//Recebendo o valor da variavel b
	printf("O valor da variavel b é %d", b);
	return 0;
}
