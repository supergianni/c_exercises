#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

void cicliAnnidati(int n, int m)
{
  int primoContatore = n;
  int secondoContatore = m;
  
  while (primoContatore > 0) 
  {
    cout << "-----------------------------PRIMO CONTATORE:" << primoContatore << endl;
    secondoContatore = m;
    while (secondoContatore > 0)
    {
        cout << "SECONDO CONTATORE:" << secondoContatore << endl;
        secondoContatore = secondoContatore - 1;
    }
    primoContatore = primoContatore - 1;
  }
}

int main()
{
 cicliAnnidati(10,5);
 system("pause");
 system("CLS");

} 
