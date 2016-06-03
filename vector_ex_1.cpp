#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

/*void vettoreInteri()
{
    vector<int> vettore;
    vettore.push_back(3);
    vettore.push_back(10);
    vettore.push_back(33);
    
    for(int x=0; x<vettore.size(); x++) 
    {
        cout<<vettore[x]<<" ";
    }
}*/

void vettoriInteri()
{
    int vettore[3];
    vettore[0] = 3;
    vettore[1] = 2;
    vettore[2] = 1;    
    
    for(int x=0; x<3 ; x++) 
    {
        cout << "TESTO MAIUSCOLO: " << x << endl;
    }
}

int main()
{
  vettoriInteri();
  system("pause");    
}

