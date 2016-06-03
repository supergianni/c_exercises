/*
Scrivete una funzione che:
    - Acquisisca da tastiera un vettore di interi 
    - Attraverso una funzione chiamata menoFrequente
    
    scritta da voi restituisca uno dei valori che compare il minor numero di volte nel vettore. 
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

vector<int> caricaVettore()
{
   int lunghezza;
   cout << "Inserire lunghezza vettore = ";
   cin >> lunghezza;
   
   vector<int> V (lunghezza, 0);
   int i;
   for (i=0; i<=lunghezza-1; i++) 
   {
     cout << "Inserire numero = ";
     cin >> V[i];
   }
   return V;
}

int menoFrequente(vector<int> v)
{
  int i,j;
  int valoreMenoFrequente, countValMenoFreq;
  int count=0; 
  int len = v.size();
  for (i = 0; i<len; i++) 
  {
    count=0;
    for (j = 0; j<len; j++) 
    {
        if (v[i]==v[j])
            count++;
    }
    if (count < countValMenoFreq)
    {
        valoreMenoFrequente = v[i];
        countValMenoFreq = count;
    }
  }
  return valoreMenoFrequente;
}

int main()
{
  vector<int> vettore = caricaVettore();
  printVector(vettore);
  
  int valore = menoFrequente(vettore);
  cout << "VALORE MENO PRESENTE: " << valore << endl;
  system("pause");  
}

