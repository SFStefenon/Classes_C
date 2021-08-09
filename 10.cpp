#include<iostream>
#include <stdio.h>
using namespace std;

int main(){

float c, f;	

f=1;
do
{
	cout<<"\n Numero"<<f;
	f++;
}
while(f<=50);
{
c=(f-32)*5/9;
//Para apresentar tudo
cout<<"\n"<<c<<" graus C";
}

return 0;
}
