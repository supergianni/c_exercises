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
   char d = setChar();
   
   if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
    && 
     (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u'))
   {
        cout << "HAI INSERITO DUE VOCALI \n";
   }
   else
   {
       cout << "NON HAI INSERITO DUE VOCALI \n";
   }
    
   system("pause");
}
