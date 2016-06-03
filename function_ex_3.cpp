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
   printTime(11,15);
   system("pause");
}
