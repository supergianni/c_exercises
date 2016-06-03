#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

string setString()
{
   string s;
   cout << "Inserire la stringa = ";
   cin >> s;
   return s;
}

void conteggio(string testo)
{
    int lunghezza;
    lunghezza = testo.length();
    
    int contatoreVocali = 0;
    int contatoreConsonanti = 0;
    
    int contatore = 0;
    while (contatore < lunghezza)
    {
        char lettera = testo[contatore];
        if (lettera == 'a' || lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'u')
            contatoreVocali = contatoreVocali + 1;
        else
            contatoreConsonanti = contatoreConsonanti + 1;

        contatore = contatore + 1;
    }   
    
    cout << "VOCALI: " << contatoreVocali << endl;
    cout << "CONSONANTI: " << contatoreConsonanti << endl;
}

int main()
{
  string testo;
  testo = setString();
  
  conteggio(testo);
  system("pause");    
}

