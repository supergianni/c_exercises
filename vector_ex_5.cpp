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

vector<int> invertiVettore(vector<int> v)
{
    int len = v.size();
    vector<int> vettoreInvertito (len, 0);
    
    int j = 0;
    for(int i = len-1; i >= 0; i--)
    {
        vettoreInvertito[j] = v[i];
        j++;
    }
    return vettoreInvertito;
}

int main()
{
  vector<int> vettore1 = caricaVettore();
  printVector(vettore1);
  
  vector<int> vettoreInvertito = invertiVettore(vettore1);
  printVector(vettoreInvertito);
  
  system("pause");  
}

