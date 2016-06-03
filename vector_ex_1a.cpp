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

int main()
{
  vector<int> v;
  v.push_back(2);
  v.push_back(4);
  v.push_back(9);
  v.push_back(77);
  printVector(v);
  
  system("pause");  
}
