#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

void stampaRettangolo(int n, int m)
{
  int primoContatore = n;
  int secondoContatore = m;
  
  while (primoContatore > 0) 
  {
    secondoContatore = m;
    while (secondoContatore > 0)
    {
        cout << "*";
        secondoContatore = secondoContatore - 1;
    }
    primoContatore = primoContatore - 1;
    cout << "" << endl;
  }
}

int main()
{
 stampaRettangolo(10,10);
 system("pause");
 system("CLS");

} 
