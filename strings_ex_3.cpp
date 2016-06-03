#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

string setString()
{
   string s;
   cout << "Inserire la stringa = ";
   cin >> s;
   return s;
}

string reverse(string s)
{
  int lunghezza = s.length()-1;
  
  string stringaReverse;
  while (lunghezza >= 0)
  {
     stringaReverse = stringaReverse + s[lunghezza];  
     lunghezza = lunghezza - 1;
  }
    
  return stringaReverse;
}

int main()
{
  string testo;
  string testoReverse;
  testo = setString();
  
  testoReverse=reverse(testo);
  cout << "TESTO REVERSE: " << testoReverse << endl;
  system("pause");    
}
