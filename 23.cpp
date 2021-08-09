#include<stdio.h>
#include<iostream> 	//funções básicas ex: cout
using namespace std;

int main()
{
 int a, b;
 float resultDivComCast, resultDivSemCast;
 a = 13;
 b = 26;

 resultDivComCast = (float) a/b;
 resultDivSemCast  =  (a/b);

 cout<<"\n Resultado da divisao *sem cast* = "<<resultDivSemCast;
 cout<<"\n Resultado da divisao *com cast* = "<<resultDivComCast;
 return 0;
} 

