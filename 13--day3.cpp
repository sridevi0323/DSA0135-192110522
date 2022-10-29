#include<iostream>
using namespace std;
int main()
{
	int pay,sum;
	cout<<"Please enter your income:";
	cin>>pay;
	if(pay<=150000)
	{
		cout<<"No Tax!!";
	}
	else if(pay>150001&&pay<=300000)
	{
		sum=pay*0.1;
	}
	else if(pay>300001&&pay<=500000)
	{
		sum=pay*0.2;
	}
	else if(pay>=500001)
	{
		sum=pay*0.3;
	}
	else
	{
		cout<<"Invalid Input!!";
	}
	cout<<"\nYour payable tax is:"<< sum <<endl;
}
