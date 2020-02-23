#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char palavra[10];
	
	//Limpa o Buffer
	printf("Digite uma palavra: ");
	
	//Limpar o buffer 
	setbuf(stdin, 0);
	
	//Lê a string
	fgets(palavra, 255, stdin);
	
	//Limpas as casas nao utilizadas
	palavra[strlen(palavra)-1] = '\0';
	
	//Imprime na tela
	printf("%s", palavra);
	return 0;
}
