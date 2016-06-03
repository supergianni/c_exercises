#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

void primaFunzione()
{
  string prima = "Ciao, ";
  string seconda = "mondo.";
  
  string unica = prima + seconda;
  
  cout << prima << seconda << endl;
  cout << unica << endl;
}

void secondaFunzione()
{
    string frutta = "Pesca";
    char lettera1 = frutta[0];
    char lettera2 = frutta[1];
    
    cout << frutta << endl;
    cout << lettera1 << endl;
    cout << lettera2 << endl;  
}

void terzaFunzione()
{
    int lunghezza;
    char ultimoCarattere;
    string frutta = "Pesca";
    lunghezza = frutta.length();
    
    ultimoCarattere = frutta[lunghezza-1];
    
    cout << lunghezza << endl;
    cout << ultimoCarattere << endl;
}

void quartaFunzione()
{
    int lunghezza;
    string frutta = "Ananas";
    lunghezza = frutta.length();
    
    int contatore = 0;
    while (contatore < lunghezza)
    {
        char lettera = frutta[contatore];
        cout << lettera << endl;
        contatore = contatore + 1;
    }
}

void quintaFunzione()
{
    string frutta = "Pesca";
    
    int primo_indice_s = frutta.find('s');
    int primo_indice_a = frutta.find('a');
    cout << primo_indice_s << endl;  
    cout << primo_indice_a << endl;  
}

void sestaFunzione()
{
  string frutta1 = "Pesca";
  string frutta2 = "Pesca";
  
  if (frutta1==frutta2)
    cout << "Stringhe UGUALI" << endl; 
  else
     cout << "Stringhe DIVERSE" << endl;
     
  if (frutta1.compare(frutta2) == 0)
    cout << "Stringhe UGUALI" << endl; 
  else
     cout << "Stringhe DIVERSE" << endl;
}

void settimaFunzione()
{
  string frutta1 = "Matematica";
    
  string stringaNuova = frutta1.substr(2,4);
  cout << stringaNuova << endl;
  
  string stringaNuova2 = frutta1.substr(2);
  cout << stringaNuova2 << endl;
  
}

void ottavaFunzione()
{
  string frutta1 = "Matematica";
    
  frutta1.replace(4,2,"XX"); 
  cout << frutta1 << endl;
}

void nonaFunzione()
{
  string frutta1 = "matematica";
  
  int index = 0;
  while (index < frutta1.length())
  {
      frutta1[index] = toupper(frutta1[index]);
      index++;
  }
  cout << frutta1 << endl;
}

void decimaFunzione()
{
  string frutta1 = "MATEMATICA";
  
  int index = 0;
  while (index < frutta1.length())
  {
      frutta1[index] = tolower(frutta1[index]);
      index++;
  }
  cout << frutta1 << endl;
}

int main()
{
  decimaFunzione();
  system("pause");    
}
