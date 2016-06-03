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
   cout << "Inserire eta = ";
   cin >> num;
   return num;
}

int stampaeta(int eta)
{
    if (eta < 18)
        cout << "Sei minorenne \n";
    else
    {
        if (eta>=18 && eta<65)
            cout << "Sei adulto \n";
        else
            cout << "Sei anziano \n";     
    }
}

int main ()
{
   int eta = setInt();
      
   stampaeta(eta);
   
   system("pause");
}

