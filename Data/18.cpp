//Aula sobre Vetores (Arrays)
//conjunto de variaveis do mesmo tipo
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{//declaração de Vetores (matriz)

int tam=128;
double pi=3.14159;
int freq=64;

double teta[tam];
double vetor_s[tam];
double vetor_c[tam];

//x=-b+(-4*a*c)^.5;

int i;

for(i=0;i<tam;i++){
	
	teta[i]=(2*pi*i/freq);
	
	vetor_s[i]=sin(teta[i]);
	cout<<vetor_s[i]<<endl;
}
	
}
