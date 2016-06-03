#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

void funzione()
{
    char testo[20];
    cout << "SIAMO NELLA FUNZIONE \n";
    cout << "Inserire un testo = ";
    gets (testo);
    printf("Testo inserito: %s \n", testo);   
}

int main ()
{
   funzione();
   funzione();
   system("pause");
}
