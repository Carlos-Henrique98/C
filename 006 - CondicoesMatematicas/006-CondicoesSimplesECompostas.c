#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a = 5, b =10, c =15;
	char d = 'x';
	
	if(a > 2)
	{
		printf("O numero %d é maior que 2",a);
	}
	
	if(c >=b)
	{
		printf("\n %d eh maior ou igual que %d",c,b);
	}
	
	if(a < 10)
	{
		printf("\n %d eh menor que 10", a);
	}
	
	if(a <= 10)
	{
		printf("\n %d eh menor ou igual a 10", a);
	}
	
	if(c != 10)
	{
		printf("\n %d não eh 10", c);
	}
	
	if(d != 'a')
	{
		printf("\n %c não eh a",d);
	}
	return 0;
}
