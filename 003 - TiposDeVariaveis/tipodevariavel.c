#include <stdio.h>
#include <stdlib.h>
#include <std.bool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Definindo Variaveis
	int a;
	float b;
	char c;
	bool d;
	
	//Passando VALORES
	a = 5;
	b = 2.3;
	c = 'teste';
	d = true;
	
	//Escrevendo na tela
	printf("\n O valor de a = %d \n", a);
	printf("\n O valor de b = %.2f \n", b);
	printf("\n O valor de c = %c \n",c);
	printf("\n O valor de d = %d \n",d);
	
	
	//Lendo Valores
	scanf("\n %d", &a);
	scanf("\n %f", &b);
	scanf(" %c", &c);
	scanf(" %d", &d);
	
	//Novos dados
	printf("\n O valor de a �: %d", a);
	printf("\n O valor de b � : %.2f", b);
	printf("\n O valor de c � : %c", c);
	printf("\n O valor de d � : %d", d);
	return 0;
}
