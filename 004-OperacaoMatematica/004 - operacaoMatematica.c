#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a = 5, b = 3;
	
	printf("a = %d \n",a);
	printf("b = %d \n",b);
	
	//Somando
	printf("A soma de a e b é: %d\n", a+b);
	printf("A soma de %d e %d é %d \n", a,b,a+b);
	
	//Subtraindo
	printf("A subtracao de %d e %d é %d \n",a,b,a-b);
	
	//Multiplicando
	printf("A multiplicacao de %d e %d é %d \n", a,b,a*b);
	
	//Dividindo
	printf("A divisao de %d e %d é %d \n", a,b,a/b);
	
	//Resto
	printf("O resto da divisao entre %d e %d = %d",a,b,a %b);
	
	//Valor absoluto
	printf("O valor absoluto de -3 é: %d \n", abs(-3));
	
	return 0;
}
