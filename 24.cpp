#include <stdio.h>  //funções básicas ex: printf
#include <stdlib.h> //biblioteca p/ system 
#include<iostream> 	//funções básicas ex: cout
using namespace std;

int main()
{
 int i,j;
 int numero;
 cout<<"Gerando 3 valores aleatorios:\n\n";
 for(j=0; j<3;j++) {
 for (i = 0; i < 3; i++)
  {
   numero = rand() % 10;
   cout<<numero;
  }
  cout<<"\n";
 }
 return 0;
}
