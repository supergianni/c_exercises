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
        if (a > b)
        {
            cout << "IL PRIMO NUMERO E' MAGGIORE DEL SECONDO \n";
        }
        else
        {
            if (a < b)
            {
                cout << "IL SECONDO NUMERO E' MAGGIORE DEL PRIMO \n";
            }  
        }
    }
    
    if (a!=b)
    {
        cout << "I NUMERI SONO DIVERSI \n";
    }
    
   system("pause");
}
