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

bool isSingleDigit(int x)
{
  if (x >=0)
  {
     if (x < 10)
     {
        return true; 
     }
     else
     {
        return false;       
     }
  }
  else
  {
       return false; 
  } 
}

int main ()
{
   int a = setInt();
   int b = setInt();
     
   bool singleDigitA = isSingleDigit(a);
   bool singleDigitB = isSingleDigit(b);
   
   if (singleDigitA) 
   {
        cout << "IL NUMERO A INSERITO E' A SINGOLA CIFRA \n";
   }
   else
   {
        cout << "IL NUMERO A INSERITO NON E' A SINGOLA CIFRA \n";
   }
   
   if (singleDigitB) 
   {
        cout << "IL NUMERO B INSERITO E' A SINGOLA CIFRA \n";
   }
   else
   {
        cout << "IL NUMERO B INSERITO NON E' A SINGOLA CIFRA \n";
   }
   system("pause");
}
