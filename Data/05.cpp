//Aula If/Else 05

#include<iostream>
using namespace std;

int main(){
	
	int vidas, mortes;	
	string nome;

	cout <<"Quantas vidas o jogador tem? ";
	cin >> vidas;
	
	cout <<"Qual o nome do jogador? ";
	cin >> nome;

	cout <<"\nJogador " <<nome<< " tem " <<vidas<< " vidas\n";
	
	//Se o teste for verdadeiro
	if (vidas > 0)
	{
	cout<<"\nJogador esta Vivo\n";
	}
	else 
	{
	cout<<"\nGAME OVER\n";
	}

	
		
	return 0;
}
