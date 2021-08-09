#include<iostream>
#include <stdio.h>
using namespace std;

int main(){

inicio:
int resposta;
cout<<"Digite um numero entre 1 e 3:";
cin>>resposta;

switch (resposta)
{
case 1: cout<<" Digitou 1.";
break;
case 2: cout<<" Digitou 2.";
break;
case 3: cout<<" Digitou 3.";
break;
default: 
cout<<"Opcao invalida.\n";
goto inicio;
}
}
