#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int cont;
	
	//TABUADA
	for(cont = 0; cont <= 10; cont++)
	{
		printf("\n 5 X %d = %d", cont, 5*cont);
	}
	
	printf("\n");
	
	for(cont = 0; cont <= 10; cont = cont +2)
	{
		printf("\n%d", cont);
	}
	
	for(cont = 10; cont > 0; cont--)
	{
		printf("\n%d",cont);
	}
	return 0;
}
