#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

void stampalinea(int n)
{
  int i=1;
  while (i<=n)
  {
    cout << '*';
    i=i+1;      
  }   
}

void stampatriangolo(int n)
{
  int i=1;
  while (i<=n)
  {
    stampalinea(i);
    cout << endl;
    i=i+1;      
  }   
}

int main()
{
  stampatriangolo(10);
  system("pause");
  system("CLS");

} 
