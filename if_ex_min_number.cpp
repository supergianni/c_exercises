#include <math.h>
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

int getMinimo(int a, int b, int c, int d)
{
  int numMinimo = a;
  
  if (b < numMinimo)
  {
    numMinimo = b;
  }
  
  if (c < numMinimo)
  {
    numMinimo = c;
  }
  
  if (d < numMinimo)
  {
    numMinimo = d;
  }
  
  return numMinimo;
}

int main ()
{
   int a = setInt();
   int b = setInt();
   int c = setInt();
   int d = setInt();
   
   int minimo = getMinimo(a,b,c,d);
   
   cout << "IL NUMERO MINIMO INSERITO E' " << minimo << "\n";
   system("pause");
}
