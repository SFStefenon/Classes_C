//Aula sobre Vetores (Arrays)
//Veotr=conjunto de variaveis do mesmo tipo
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
//Declara��o de vetores
//tipo de dados nome e tamanho

int tam=128;
double vetor[tam];
int i;
//cria uma variavel com 10 posi��es
//errado pois ele tem 5 posi��es mas n�o conta o cico
//vetor[5]=10;

for(i=0; i<128; i++){

	vetor[i]=sin(i*3.14/64);
	
	cout<<vetor[i]<<"\n";

}


	
return 0;
}
