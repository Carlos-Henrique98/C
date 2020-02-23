#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//SEM - Using Namespace STD
	//std::string palavra;
	
	//printf("Digite uma palavra: ");
	//std::cin >> palavra;
	
	//std::cout << palavra;
	
	//COM - Using Namespace STD
	//Definindo uma String
	string palavra;
	
	//Imprimindo na tela
	cout << "Digite uma palavra: ";
	
	//Lendo uma String
	cin >> palavra;
	
	//Imprimindo uma variavel
	cout << "\n A palavra é :" << palavra;
	
	
	return 0;
}
