#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a = 2;
	char b = 'x';
	
	switch(a){
		case 1:
			printf("\n Opcao Escolhida: 1");
			break;
			
		case 2:
			printf("\n Opcao Escolhida: 2");
			break;
			
		case 3:
			printf("\n Opcao Escolhida: 3");
			break;
			
		case 4:
			printf("\n Opcao Invalida");
			break;
	}
	
	switch(b)
	{
		case 'x':
			printf("\n A letra eh x");
			break;
		
		default:
			printf("\n Opcao invalida!");
			break;
	}
	return 0;
}
