#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//Criando uma matriz
	int matriz [2] [2], i, j;
	
	//Passando Valores
	matriz[0] [0] = 1;
	matriz[0] [1] = 2;
	matriz[1] [0] = 3;
	matriz[1] [1] = 4;
	
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			//cout << "\ni = " << i << " , j = " << j;	
			cout << "\n" << matriz [i] [j] << " ";
		}	
		cout << "\n";
	}
	
	//Imprimindo valores na tela
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			scanf("%d", &matriz[i] [j]);	
			
		}	
	
	}
	
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			//cout << "\ni = " << i << " , j = " << j;	
			cout << matriz [i] [j] << " ";
		}	
		cout << "\n";
	}
	
	return 0;
}
