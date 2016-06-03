#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cmath>
#include <stdio.h>
using namespace std;

char setChar()
{
   char carattere;
   cout << "Inserisci la lingua scelta (i, e, f, t, s) = ";
   cin >> carattere;
   return carattere;
}

int main ()
{
   char c = setChar();
   
   if (c == 'i')
   {
        cout << "CIAO! \n";
   }
   else
   {
       if (c == 'e')
       { 
            cout << "HELLO! \n";
       }
       else
       {
            if (c == 'f')
            { 
                cout << "SALUT! \n";
            } 
            else
            {
                if (c == 't')
                { 
                    cout << "TSCHUSS! \n";
                } 
                else
                {
                    if (c == 's')
                    { 
                         cout << "HOLA! \n";
                    } 
                    else
                    {
                         cout << "NON RICONOSCO LA LINGUA SCELTA \n";
                    }             
                }
            }
       }
   }
    
   system("pause");
}
