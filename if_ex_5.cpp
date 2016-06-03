#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cmath>
#include <stdio.h>
using namespace std;

char setChar()
{
   char carattere;
   cout << "Inserire carattere = ";
   cin >> carattere;
   return carattere;
}

int main ()
{
   char c = setChar();
   
   if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
   {
        cout << "HAI INSERITO UNA VOCALE \n";
   }
   else
   {
       cout << "HAI INSERITO UNA CONSONANTE \n";
   }
    
   system("pause");
}
