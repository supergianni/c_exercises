/*
Vettore delle Frequenze. 

Scrivete un programma che : 
    - Acquisisca da tastiera una stringa con caratteri maiuscoli e minuscoli
    - Attraverso una funzione scritta da voi 
            vector<int> frequenze(string s)
      che data una stringa s, restituisca un vettore di 26 interi, contenente alla posizione i
      la FREQUENZA della lettera (minuscola) dell'alfabeto. 
      
 SUGGERIMENTO: 
    - Se il carattere Ë maiuscolo, trasformatelo in minuscolo
    - La posizione di una minuscola nell'alfabeto Ë dato da :
         pos = (carattere - 'a');
      e vale tra 0 e 25.
      
    - Definite un vettore f di 26 interi tutto inizializzato a 0 per immagazzinare il 
      risultato. 
      Scorrete la stringa con un ciclo, prendete la minuscola del carattere, se aggiungete
      1 alla posizione f[pos].
      Alla fine restituite f. 
*/
#include <iostream>
#include <math.h>
#include <vector>
#include <stdlib.h>
using namespace std;

void printVector (vector<int> V) 
{
  int i, len = V.size();
  for (i = 0; i<len; i++) 
  {
     cout << V[i] << "|";
  }
  cout << endl;
}

string setString()
{
   string s;
   cout << "Inserire la stringa = ";
   cin >> s;
   return s;
}

vector<int> frequenze(string s)
{
  int index = 0;
  char carMin;
  int pos;
  vector<int> f (26, 0);
  while (index < s.length())
  {
      carMin = tolower(s[index]);
      pos = (carMin-'a');
      f[pos] = f[pos] + 1;
      index++;
  }
  return f;
}

int main()
{
  string stringaOriginale = setString();
  vector<int> f = frequenze(stringaOriginale);
  printVector(f);
  system("pause");    
}
