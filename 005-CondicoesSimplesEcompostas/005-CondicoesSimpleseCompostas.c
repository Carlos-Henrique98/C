#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a = 5,opcao = 3;
	float b = 2.5;
	char c = 'x';
	
	
	if(a == 5)
	{
		printf("A igual a %d\n",a);
	}
	else
	{
		printf("A n�o igual a 5\n");
	}
	
	
	if(b == 2.5)
	{
		printf("\n A variavel b = 2.5\n");
	}
	if(c == 'x'){
		printf("\n A variavel c = letra x %d", c);
	}
	
	
	//NUMERO PAR
	if(a % 2 == 0)
	{
		printf("\nO numero %d � PAR!\n",a);
	}
	else
	{
		printf("O numero %d � IMPAR!",a);	
	}
	
	//Condi��o Composta
	if(opcao == 1)
	{
		printf("\n A opcao = 1");
	}
	else if(opcao == 2)
	{
		printf("\n A opcao = 2");
	}
	else
	{
		printf("\nA opcao n�o eh igual a 1 e nem 2");
	}
	return 0;
}
