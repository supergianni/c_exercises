/*
Scrivete una funzione che : 
    - Acquisisca da tastiera una stringa con caratteri maiuscoli e minuscoli
    - Attraverso una funzione scritta da voi 
    
            string stringToLower(string s)
      
      TRASFORMI tutti i caratteri maiuscoli in minuscoli 
*/
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

string setString()
{
   string s;
   cout << "Inserire la stringa = ";
   cin >> s;
   return s;
}

string stringToLower(string s)
{
  int index = 0;
  while (index < s.length())
  {
      s[index] = tolower(s[index]);
      index++;
  }
  return s;
}

int main()
{
  string stringaOriginale = setString();
  string s = stringToLower(stringaOriginale);
  cout << s << endl;
  system("pause");    
}
