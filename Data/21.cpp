//Aula sobre Vetores (Multidimencional)
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){

int matriz[3][4];
int l, c;

		cout<<"digite os valores da linha e coluna 3X4\n";
		cout<<"Inicialmente todos da primeira linha\n";
for(l=0;l<3;l++){
	
	cout<<"todos da linha "<<l<<endl;
	for(c=0;c<4;c++){
		cin>>matriz[l][c];
		
	}
}
		
	cout<<"Matriz Completa"<<endl;
for(l=0;l<3;l++){
	for(c=0;c<4;c++){
		cout<<matriz[l][c]<<" ";
	}
	cout<<endl;
}


return 0;	
}
