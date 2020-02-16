#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a = 19;
	
	if(a > 5 && a > 15)
	{
		printf("\n A variavel 'a' esta entre 5 e 15");
	}
	
	if(a > 5 || a > 15)
	{
		printf("\n A variavel 'a' eh maior que 5 ou 15");
	}
	
	if((a > 5 && a < 15 ) || a == 20)
	{
		printf("\n A variavel 'a' esta entre 5 e 15 ou ela vale 20");
	}
	return 0;
}
