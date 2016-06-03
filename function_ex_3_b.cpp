#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

void printTime(int hour, int minute)
{
    cout << hour;
    cout << ":";
    cout << minute;
    cout << "\n";
}

int main ()
{
   int ora;
   int min;
   cout << "Inserire l'ora = ";
   cin >> ora;
   cout << "Inserire i minuti = ";
   cin >> min;
   printTime(ora,min);
   system("pause");
}
