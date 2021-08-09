//Aula sobre Vetores (Arrays)
//Veotr=conjunto de variaveis do mesmo tipo
#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
//Declaração de vetores
//tipo de dados nome e tamanho

int vetor[5];
int vetor0,vetor2,vetor5;
int i;
//cria uma variavel com 10 posições

vetor[0]=10;
vetor[1]=20;
vetor[2]=30;
vetor[3]=40;
vetor[4]=50;

vetor0=vetor[0]+vetor[1];
vetor[4]=vetor[2]+vetor[3];

int vetor1[5]={10,20,30,40,50};
int j;

//errado pois ele tem 5 posições mas não conta o cico
//vetor[5]=10;

cout<<vetor[0]<<"\n";
cout<<vetor0<<"\n";
cout<<vetor[4]<<"\n";

for(i=0; i<5; i++){
	cout<<vetor[i]<<"\n";
}

for(j=0; j<5; j++){
	cout<<vetor1[j]<<"\n";
}
	
return 0;
}





