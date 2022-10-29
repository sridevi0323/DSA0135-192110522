#include<iostream>
using namespace std;
int main() 
{
	int a[100],n,m,sum=0,dif=0;
	cout<<"enter the number of elements in an array:";
	cin>>n;
	cout<<"enter the elements of an array:";
	for(int i=0;i<n;i++)
	cin>>a[i]; 

	for(int i=1;i<n-1;i++)
	{ 
	if(a[i]>a[m])
	m=i;
	}

	for(int i=1;i<n-1;i++) 
	{ 
	if(a[n-1]<a[dif])
	dif=n-1;
	}

    for ( int i = 0 ; i < n ; ++ i ) 
        sum += a [ i ] , dif -= a [ i ];  

    cout << "Sum is : " << sum << endl ;   
    cout << "Difference is : " << dif ; 
	 return 0 ; 
	 }

