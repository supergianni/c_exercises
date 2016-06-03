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

string stringToNum(string s)
{
  int index = 0;
  int pos;
  while (index < s.length())
  {
      s[index] = tolower(s[index]);
      pos = (s[index]-'a');
      cout << pos << endl;
      index++;
  }
  return s;
}


int main()
{
  string stringaOriginale = setString();
  string s = stringToNum(stringaOriginale);
  system("pause");    
}
