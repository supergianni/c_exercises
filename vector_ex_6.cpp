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

void cercaValori(vector<int> V) 
{
  int min = 0;
  int max = 0;
  int len = V.size();
  for (int i = 0; i<len; i++) 
  {
     if (i == 0)
     {
        min = V[i];
        max = V[i]; 
     }
     else
     {
        if (min > V[i])
            min = V[i];
        
        if (max < V[i])
            max = V[i]; 
     }
  }
  
  cout << "VALORE MINIMO :"<< min << endl; 
  cout << "VALORE MASSIMO :"<< max << endl; 
}
int main()
{
  vector<int> vettore = caricaVettore();
  printVector(vettore);
  
  cercaValori(vettore);
  
  system("pause");  
}

