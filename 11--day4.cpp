#include <iostream>  
using namespace std;  
int main()  
{  
int a,b;   
cout<<"enter a value:";
cin>>a;
cout<<"enter b value:";
cin>>b;   
cout<<"Before swap a= "<<a<<" b= "<<b<<endl;      
a=a*b;
b=a/b;   
a=a/b;    
cout<<"After swap a= "<<a<<" b= "<<b<<endl;      
return 0;  
}
