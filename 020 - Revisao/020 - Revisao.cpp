#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include<string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	//Definindo Variaveis
	int a;
	float b;
	char c;
	bool d;
	
	//Passando Valores
	a = 10;
	b = 2.0;
	c = 'u';
	d = true;
	
	//Mostrando os dados na tela
	printf("\n%d", a);
	printf("\n%.2f", b);
	printf("\n%c", c);
	printf("\n%d", b);
	
	cout << "\nValor :" << a;
	
	//Lendo Valores
	scanf("\n%d", &a);
	
	//Lendo valor C++
	cin >> a;
	
	//Imprimindo um novo valor
	cout << "Valor C++: " << a;
	
	return 0;
}
