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

bool vettoriUguali(vector<int> vettore1, vector<int> vettore2)
{
   int len1 = vettore1.size();
   int len2 = vettore2.size();
   
   if (len1 != len2)
   {
        return false;     
   }
   else
   {
      for (int i=0;i<len1;i++)
      {
        if(vettore1[i]!=vettore2[i])
        {
            return false;
        }      
      }
   return true;
   }
}    

int main()
{
  vector<int> vettore1 = caricaVettore();
  printVector(vettore1);
  
  vector<int> vettore2 = caricaVettore();
  printVector(vettore2);
  
  bool uguali = vettoriUguali(vettore1, vettore2);
  if (uguali == 1)
    cout << "Vettori UGUALI" << endl; 
  else
    cout << "Vettori DIVERSI" << endl; 
  system("pause");  
}
