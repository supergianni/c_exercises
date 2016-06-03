#include <iostream>
#include <math.h>
#include <vector>
#include <stdlib.h>
using namespace std;

void printVector (vector<int> V) 
{
  int i, len = V.size(); // V.size() calcola la lunghezza di V
  for (i = 0; i<len; i++) 
  {
     cout << V[i] << "|";
  }
  cout << endl;
}

vector<int> caricaPari()
{
   vector<int> V (5, 0);
   int i;
   int l=0;
   for (i=2; i<=10; i=i+2) 
   {
     V[l]=i;
     l++;     
   }
   return V;
}

vector<int> caricaDispari()
{
   vector<int> V (5, 0);
   int i;
   int l=0;
   for (i=1; i<=9; i=i+2) 
   {
     V[l]=i;
     l++;     
   }
   return V;
}

int main()
{
  vector<int> vettorePari = caricaPari();
  printVector(vettorePari);
  
  vector<int> vettoreDispari = caricaDispari();
  printVector(vettoreDispari);
  
  system("pause");  
}
