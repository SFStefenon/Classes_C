//Vari�veis Aula 02

#include <stdio.h>  //fun��es b�sicas ex: printf
#include <stdlib.h> //biblioteca p/ system 
#include <locale.h> //biblioteca p/ set locale
#include<iostream> 	//fun��es b�sicas ex: cout
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	cout<<"Utiliza��o da l�ngua portuguesa!\n";
	printf("Utiliza��o do Printf\n");
	
	//variaveis interiras ex: 10, 20, -2
	int vidas; 
	
	//variaveis letras ex: a, b (somente um caracter)
	char letra;
	
	//vari�veis reais ex: 2.49999999
	double decimal_1;
	
	//vari�veis reais ex: 2.5
	float decimal_2;
	
	//vari�vel verdadeira = 1 / falso = 0 ex: est� vivo no jogo
	bool vivo; 
	
	//vari�vel tipo texto ex: Bruno
	string nome;
	
	//posso incializar j� com o valor
	double decimal_3=3.66;
	double decimal_4=2.55;
	
	//imprimo as variav�s
	cout <<decimal_3<<"\n";
	cout <<decimal_4<<"\n";
	
	system("pause");	
	return 0;
}
