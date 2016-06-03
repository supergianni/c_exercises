#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

void StampaCollatzSequence (int n) //Sia n>0
{
 while (n > 0) 
 {
   if (n%2 == 0) // n è pari
   {
     cout << "Numero pari:" << n << endl;
   } 
   else // n è dispari 
   {
     cout << "Numero dispari:" << n << endl;
   } 
  n = n - 1;
 }
}

int main()
{
 StampaCollatzSequence(10);
 system("pause");
 system("CLS");

} 
