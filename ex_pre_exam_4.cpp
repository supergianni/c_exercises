/*
Scrivete una funzione 
   double l (double x, int n)

per calcolare la somma dei termini di grado da 1 a n della serie il cui termine di grado
i vale : 
    (-(-x)^i)/i    
Nota: 
    - se i = 1 allora (-(-x)^i)/i vale x
      se i = 2 allora (-(-x)^i)/i vale -x^2/2
      
Per calcolare la potenza usate la funzione pow(a,b) della libreria math 
quindi : #include <math.h>

X I TEST: usate i valori 
          double x = 0.5
          int n = 3 
          risultato = 0.41667
          
          oppure 
          
          double x = 0.5
          int n = 10 
          risultato = 0.405435
*/
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int setInt()
{
   int n;
   cout << "Inserire il num intero = ";
   cin >> n;
   return n;
}

double setDouble()
{
   double d;
   cout << "Inserire il numero double = ";
   cin >> d;
   return d;
}

double l(double x, int n)
{
    double s=0;
    for(int i=1; i<=n; i++)
    {
        s = s - pow(-x,i)/i;
    }
    return s;
}

int main()
{
  double x = setDouble();
  int n = setInt();
  
  double calcolo = l(x,n);
  cout << "CALCOLO: " << calcolo << endl;
  system("pause");  
}
