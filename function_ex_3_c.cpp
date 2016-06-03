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

int setInt()
{
   int num;
   cout << "Inserire numero = ";
   cin >> num;
   return num;
}

int main ()
{
   int ora = setInt();
   int min = setInt();
   printTime(ora,min);
   system("pause");
}
