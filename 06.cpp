
#include<iostream>
using namespace std;

int main(){
	
	int vidas, mortes, estatus;	
	string nome;

	cout <<"Quantas vidas o jogador comprou? ";
	cin >> vidas;
	
	cout <<"Qual o nome do jogador? ";
	cin >> nome;

	cout <<"\nJogador " <<nome<< " comprou " <<vidas<< " vidas\n";
	
	cout <<"\nQuantas vezes o jogador morreu? ";
	cin >> mortes;
	
	estatus=vidas-mortes;
	
	cout <<"\nJogador " <<nome<< " esta com " <<estatus<< " vidas\n";
		
	//Se o teste for verdadeiro
	if (estatus > 0)
	{
	cout<<"\nJogador esta Vivo\n";
	}
	else 
	{
	cout<<"\nGAME OVER\n";
	}
			
	return 0;
}
