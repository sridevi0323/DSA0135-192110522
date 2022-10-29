#include<iostream>
using namespace std;
int main() 
{
	int m,n;

	cout<<"Enter the number: ";  
	cin>>m;

	cout<<"Enter the limit: ";  
	cin>>n;

	for(int i=1 ; i<=n ; ++i)   
	 {   
	 cout<<m<<" * "<<i<<" = " <<m*i <<endl;
	 }
	 
	 
	for(int j=1 ; j<=n ; ++j) 
	{
		cout<<n<<" / "<<j<<" = "<<n/j<< endl;
	}  
	return 0;
}

