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
   if (a > 0)
   {
        cout << "IL NUMERO E' POSITIVO";
   }
   else
   {
        cout << "IL NUMERO E' NEGATIVO";
   }
   system("pause");
}
