#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

string setString()
{
   string s;
   cout << "Inserire la stringa = ";
   cin >> s;
   return s;
}

int setInt()
{
   int i;
   cout << "Inserire l'indice = ";
   cin >> i;
   return i;
}


string maiuscolo(string testo, int numero)
{
  int index = 0;
  while (index < testo.length())
  {
      if(index >= numero)
        testo[index] = toupper(testo[index]);
      
      index++;
  }
  return testo;
}

int main()
{
  string testo = setString();
  int indice = setInt();
  
  string m = maiuscolo(testo, indice);
  cout << "TESTO MAIUSCOLO: " << m << endl;
  system("pause");    
}

