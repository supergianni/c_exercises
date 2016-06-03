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

bool noSingleDigit(int x)
{
    return !isSingleDigit(x); 
}
int main ()
{
   int a = setInt();
   int b = setInt();    
   bool singleDigitA = isSingleDigit(a);
   bool singleDigitB = isSingleDigit(b); 
   bool noSingleDigitA = noSingleDigit(a);
   bool noSingleDigitB = noSingleDigit(b);
   
   cout << "singleDigitA: " << singleDigitA << "\n";
   cout << "singleDigitB: " << singleDigitB << "\n";
   cout << "noSingleDigitA: " << noSingleDigitA << "\n";
   cout << "noSingleDigitB: " << noSingleDigitB << "\n";
   
   if (singleDigitA && singleDigitB)
   {
        cout << "ENTRAMBE SINGLE DIGIT " << "\n";
   }
   else
   {
        cout << "SOLO UNA SINGLE DIGIT " << "\n";
   }
   system("pause");
}
