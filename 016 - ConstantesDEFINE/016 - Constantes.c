#include <stdio.h>
#include <stdlib.h>
#define TAM 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	printf("%d", TAM);
	
	int i;
	
	for(i = 1; i <= TAM; i++)
	{
		printf("\n%d", i);
	}
	
	return 0;
}
