#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cmath>
#include <stdio.h>
using namespace std;

int setInt()
{
   int num;
   cout << "Inserire numero = ";
   cin >> num;
   return num;
}

int getMassimo(int a, int b)
{
  int numMassimo;
  
  if (a < b)
  {
    numMassimo = b;
  }
  else
  {
    numMassimo = a;  
  }
   
  return numMassimo;
}

int main ()
{
   int a = setInt();
   int b = setInt();
   
   if (a != b)
   {
        int massimo = getMassimo(a,b);
        cout << "IL NUMERO MASSIMO INSERITO E' " << massimo << "\n";
   }
   else
   {
         cout << "I NUMERI INSERITI SONO UGUALI \n";
   }
   system("pause");
}
