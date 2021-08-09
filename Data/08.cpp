
#include<iostream>
#include<cstdlib>
#include <stdio.h>
using namespace std;

int main(){
	
	float n1, n2, r1, r2, ex, nota1, nota2, media;	
	string nome;
	char opc;
	
	//Volta pra cá
	inicio:
	
	//limpa a tela (comando do windows)
	system("cls");
	
	cout <<"Qual o nome do aluno?\n";
	cin >> nome;
	
	cout <<"Qual nota da primeira prova?\n";
	cin >> n1;
	cout <<"Qual nota da segunda prova?\n";
	cin >> n2;
	
	//Avaliação se precisa de Recuperação
	if (n1 > 7)
	{	cout<<"Nao precisa de rec. 1\n";	}
	else 
	{	cout<<"Qual a nota da 1a recuperacao\n";	cin >> r1;	}
	//substituição de nota
	if (r1 > n1)
	{	nota1=r1;	}
	else 
	{	nota1=n1;	}
	//Avaliação da 2 nota	
	if (n2 > 7)
	{	cout<<"Nao precisa de rec. 2\n";	}
	else 
	{	cout<<"Qual a nota da 2a recuperacao\n";
	cin >> r2;	}
	
	if (r2 > n2)
	{	nota2=r2;	}
	else 
	{	nota2=n2;	}
	
	media=(nota1+nota2)/2;	
		
	if (media >= 7)
	{	cout<<"\nO aluno \""<<nome<<"\" estah Aprovado\n\n";	}
	else 
	{	cout<<"\nO aluno \""<<nome<<"\" estah Reprovado\n\n";	}
			
	cout<<"---------------------------------------------------------\n";		
	cout<<"Boletim do "<<nome<<"\n";
	cout<<"---------------------------------------------------------\n";		
	cout<<"Nota 01 = "<<n1<<"\t"<<"Recup. 01 = "<<r1<<"\t"<<"Nota Consid. 01 = "<<nota1<<"\n";
	cout<<"---------------------------------------------------------\n";	
	cout<<"Nota 02 = "<<n2<<"\t"<<"Recup. 01 = "<<r2<<"\t"<<"Nota Consid. 02 = "<<nota2<<"\n";
	cout<<"---------------------------------------------------------\n";
	cout<<"Media = "<<media<<"\n";
	cout<<"---------------------------------------------------------\n";	
			
	cout<<"\nDigitacao encerrada\n";
//	cout<<"\nConsidere haver 2 provas, 2 recuperações e exame\n";
		
	cout <<"Quer digitar mais notas? (s/n) ";
	cin >> opc;
	
	//volta no inicio
	if (opc == 's' or opc == 'S')		
		{goto inicio;	}		
			
	return 0;
}
