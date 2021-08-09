#include <stdio.h>
#include <time.h>       // srand()
#include <stdio.h>  //funções básicas ex: printf
#include <stdlib.h> //biblioteca p/ system 
#include<iostream> 	//funções básicas ex: cout
using namespace std;

void gera_num();
int vetNum[6];
void imprime_num();

int main(void)
{
 gera_num();
 imprime_num();
 return 0;
}
void gera_num()
{
 int i;
 cout<<"Gerando 6 valores aleatorios:\n\n";
 srand(time(NULL));
  for (i = 0; i < 6; i++)
    vetNum[i] = rand() % 60;
}

void imprime_num()
{
 int i;
 for(i=0;i<6; i++)
    cout<<"\t\n"<<vetNum[i];
}

