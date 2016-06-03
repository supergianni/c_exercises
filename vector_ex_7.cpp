#include <iostream>
#include <math.h>
#include <vector>
#include <stdlib.h>
using namespace std;

int main()
{
    int i;
    /*
    string strs[5];
    
    strs[0] = "first string";
    strs[1] = "second string";
    strs[2] = "third string";
    strs[3] = "this is the fourth string";
    strs[4] = "and finally this is the fifth string"; 
  */
    string strs[] = {"uno", "due", "tre", "quattro", "cinque"};
   
    for(int i = 0; i<5; i++)
    {
        cout << "VALORE :"<< strs[i] << endl;    
    }
    system("pause");
}
