#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main ()
{
      srand((unsigned)time(0)); //para gerar números aleatórios reais.
      int maior = 100;
      int menor = 30;
      int aleatorio = rand()%(maior-menor+1) + menor;
      cout << "Numero Aleatorio = " << aleatorio <<endl;
      return 0;
}
