#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

void sommaNumeri(int n)
{
 int sommaPari = 0;
 int sommaDispari = 0;
 
 while (n > 0) 
 {
   if (n%2 == 0) // n è pari
   {
     sommaPari = sommaPari + n;
   } 
   else // n è dispari 
   {
     sommaDispari = sommaDispari + n;
   } 
  n = n - 1;
 }
 cout << "Somma numeri Pari:" << sommaPari << endl;
 cout << "Somma numeri Dispari:" << sommaDispari << endl;
}

int main()
{
 sommaNumeri(20);
 system("pause");
 system("CLS");

} 
