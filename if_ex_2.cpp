#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cmath>
#include <stdio.h>
using namespace std;

double setDouble()
{
   double num;
   cout << "Inserire numero = ";
   cin >> num;
   return num;
}

int main ()
{
   double a = setDouble();
   double b = setDouble();
   if (a == b)
   {
        cout << "I NUMERI SONO UGUALI \n";
   }
   else
   {
        cout << "I NUMERI SONO DIVERSI \n";
   }
   system("pause");
}
