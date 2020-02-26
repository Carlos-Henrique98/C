#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#define TAM 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	//Definindo valores
	int vetor[TAM] = {3,4,5}, cont,j,i;
	
	for(cont = 0; cont <= TAM; cont++)
	{
		//printf("%d \n", vetor[cont]);
		cout << vetor[cont] << "\n";	
	}
	
	//Passando valores para o vetor
	vetor[0] = 10;
	vetor[1] = 20;
	vetor[2] = 30;
	
	//Imprimindo valores do vetor
	for(cont = 0; cont <= TAM; cont++)
	{
		//printf("%d \n", vetor[cont]);
		cout << vetor[cont] << "\n";	
	}
	
	cont = 0;
	
	//Imprimindo valores do vetor
	while(cont < TAM)
	{
		printf("%d \n", vetor[cont]);
		cont++;
	}
	
	//Definindo Matrizes
	int matriz[3][3] = {1,2,3,4,5,6,7,8,9};
	
	for(i = 0; i < TAM; i++)
	{
		for(j = 0; j < TAM; j++)
		{
			cout << matriz[i][j] << " ";	
		}
		cout << "\n";
	}
	
	
	
	
	return 0;
}
