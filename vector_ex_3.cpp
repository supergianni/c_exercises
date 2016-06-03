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


int main()
{
  vector<int> vettore = caricaVettore();
  printVector(vettore);
  
  system("pause");  
}
