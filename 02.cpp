//Variáveis Aula 02

#include <stdio.h>  //funções básicas ex: printf
#include <stdlib.h> //biblioteca p/ system 
#include <locale.h> //biblioteca p/ set locale
#include<iostream> 	//funções básicas ex: cout
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	cout<<"Utilização da língua portuguesa!\n";
	printf("Utilização do Printf\n");
	
	//variaveis interiras ex: 10, 20, -2
	int vidas; 
	
	//variaveis letras ex: a, b (somente um caracter)
	char letra;
	
	//variáveis reais ex: 2.49999999
	double decimal_1;
	
	//variáveis reais ex: 2.5
	float decimal_2;
	
	//variável verdadeira = 1 / falso = 0 ex: está vivo no jogo
	bool vivo; 
	
	//variável tipo texto ex: Bruno
	string nome;
	
	//posso incializar já com o valor
	double decimal_3=3.66;
	double decimal_4=2.55;
	
	//imprimo as variavés
	cout <<decimal_3<<"\n";
	cout <<decimal_4<<"\n";
	
	system("pause");	
	return 0;
}
