#include <iostream>
using namespace std;
int main() 
{
   int a,b,c,max;
   cout<<"Enter a:";
   cin>>a;
   cout<<"Enter b:";
   cin>>b;
   cout<<"Enter c:";
   cin>>c;
   if (a > b && a > c) 
   {
      max = a;
   }
   if (b > a && b > c) 
   {
      max = b;
   }
   if (c > a && c > b) 
   {
      max = c;
   }
   cout <<"\nThe maximum of three numbers is "<< max << endl;
}
