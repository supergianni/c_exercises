#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

void countdown_verboso(int n)
{
  cout << "Sto per iniziare il while. n vale " << n << endl;
  
  while (n > 0)
  {
    cout<<"-----------------------------------------------"<< endl;
    cout<<"Sono all'inizio del corpo del while. Vale " << n << ">0. Stampo: " << n  << endl;
    cout<<"Sono alla fine del corpo del while. Eseguo n=n-1 " <<endl;
   
    n = n-1; 
    cout<<"-----------------------------------------------"<< endl;
  }
  cout<<"Ho appena terminato il while. Non vale " << n << ">0. Stampo: " << endl;
  cout << "Blastoff!" << endl;
} 

int main()
{
 countdown_verboso(6);
 system("pause");
 system("CLS");
} 
