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

bool pal(string testo)
{
  int i = 0;
  int l = testo.length();
  int j = l-1;
  
  while (i <= j)
  {
     if(testo[i]!=testo[j])
     {
        return false;
     }
     else
     {
        i++;
        j--;
     }   
  }
  return true;  
}

int main()
{
  string testo = setString();
  bool p = pal(testo);
  if (p == 1)
      cout << "TESTO PALINDROMO" << endl;
  else
      cout << "TESTO NON PALINDROMO" << endl;
  system("pause");    
}

