#include <math.h>
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
   if (c == 'a')
   {
        cout << "HAI INSERITO UNA A \n";
   }
   else
   {
       cout << "HAI INSERITO UN ALTRO CARATTERE \n";
   }   
   system("pause");
}
