#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int opcao;
	
	printf("\n 1 - Opcao: ");
	printf("\n 2 - Opcao: ");
	printf("\n 3 - Opcao:\n ");
	
	scanf("\n %d",&opcao);
	
	switch(opcao)
	{
		case 1:
			printf("Opcao: 1");
		break;
		
		case 2:
			printf("Opcao: 2");
		break;
		
		case 3:
			printf("Opcao: 3");
		break;
		
		default:
			printf("Opcao Invalida!");
		break;		
	}
	
	return 0;
}
