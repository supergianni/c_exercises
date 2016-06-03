#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
void printMultiples(int n, int high)
{
    int i = 1;
    while (i <= high) 
    {
      cout << n*i << "\t";
      i = i + 1;
    }
    cout << endl;
}

void printMultTable(int high) 
{
   int i = 1;
   while (i <= high) 
   {
        printMultiples(i, high);
        i = i + 1;
   }
}

int main()
{
 printMultTable(6);
 system("pause");
 system("CLS");
} 
