#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main ()
{
   char c;
   int num;   
   
   cout << "Inserire un carattere = "; 
   cin >> c;   
   cout << "Inserire un numero = "; 
   cin >> num;
   
   c= c + 1;
   num = num - 1;
   
   cout << c << endl;
   cout << num << endl;
   system("pause");
}
