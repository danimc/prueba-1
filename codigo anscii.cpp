#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
   unsigned char i;

cout << "Luis Daniel Mora";

   for(i=0;i<255; i++)
   {
       cout << "codigo anscii= " <<(int) i <<"--> " <<i << endl;

   }
   return EXIT_SUCCESS;
}
