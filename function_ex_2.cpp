#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

void funzioneStampa(char *testo)
{
    cout << "SIAMO NELLA funzioneStampa \n";
    printf("Testo inserito: %s \n", testo);   
}

int main ()
{
   char testo[20];
   cout << "SIAMO NEL MAIN 2 \n";
   cout << "Inserire un testo = ";
   gets (testo);
   funzioneStampa(testo);
   system("pause");
}
