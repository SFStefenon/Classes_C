#include<iostream>
#include <stdio.h>
using namespace std;

int main(){

float c, f;	

for(f=50;f<=150;f+=2)
{
c=(f-32)*5/9;
//Para apresentar tudo
cout<<"\n"<<f<<" eh igual a "<<c<<" graus C";

if(f==100){
	break;
}

}

return 0;
}
