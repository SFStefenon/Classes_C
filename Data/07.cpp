
#include<iostream>

#include<cstdlib>
using namespace std;

int main(){
	
	float n1, n2, r1, r2, ex, nota1, nota2, media;	
	string nome;
	char opc;
	
	//Volta pra c�
	inicio:
	
	//limpa a tela (comando do windows)
	system("cls");
	
	cout <<"Qual nota da primeira prova? ";
	cin >> n1;
	cout <<"Qual nota da segunda prova? ";
	cin >> n2;
	
	//Avalia��o se precisa de Recupera��o
	if (n1 > 7)
	{
	cout<<"\nN�o precisa de rec. 1\n";
	}
	else 
	{
	cout<<"\nQual a nota da recuperacao\n";
	cin >> r1;
	}
	//substitui��o de nota
	if (r1 > n1)
	{
	nota1=r1;
	}
	else 
	{
	nota1=n1;
	}
	//Avalia��o da 2 nota	
	if (n2 > 7)
	{
	cout<<"\nN�o precisa de rec. 1\n";
	}
	else 
	{
	cout<<"\nQual a nota da recuperacao\n";
	cin >> r2;
	}
	
	if (r2 > n2)
	{
	nota2=r2;
	}
	else 
	{
	nota2=n2;
	}
	
	media=(nota1+nota2)/2;		
	if (media >= 7)
	{
	cout <<"\nAPROVADO\n";
	}
	else 
	{
	cout <<"\nREPROVADO\n";
	}
			
	cout<<"\nDesenvolva um algoritmo para avalia��o das notas dos alunos\n";
	cout<<"\nConsidere haver 2 provas, 2 recupera��es e exame\n";
		
	cout <<"Quer digitar mais notas? (s/n) ";
	cin >> opc;
	
	//volta no inicio
	if (opc == 's' or opc == 'S')		
		{goto inicio;
	}		
			
	return 0;
}
