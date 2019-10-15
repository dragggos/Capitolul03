#include <iostream>

using namespace std;

int main()
{
   int NR,i=0;
   cout<<"Introduceti numarul NR=";
   cin>>NR;
   do
   {
     i++;
     NR/=10;
   } while (NR!=0);
   cout<<"Numarul de cifre al lui NR este "<<i<<endl;
   return 0;

}
