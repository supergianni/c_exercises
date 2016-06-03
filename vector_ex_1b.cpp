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

vector<int> primiinteri(int n)
{
 vector<int> V (n, 0);
 int i; 
 for(i=0;i<n;i=i+1) 
 {
    V[i]=i+1;
 }
 V.push_back(442);
 V.push_back(449);
 return V;
}


int main()
{
  vector<int> values = primiinteri(5);
  printVector(values);
  
  system("pause");  
}
