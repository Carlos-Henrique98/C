#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	bool a =true, b= false;
	
	if(a)
	{
		printf("\n A eh verdadeiro!");
	}
	
	if(b)
	{
		printf("\n B eh verdadeiro!");
	}
	else
	{
		printf("\n B eh falso!");
	}
	if(!b)
	{
		printf("\n B eh falso");
	}
	return 0;
}
