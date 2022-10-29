#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[100],b[100];
	cout<<"Enter user name :";
	cin>>a;
	cout<<"Re-enter user name :";
	cin>>b;
	if(strcmp(a,b)==0)
	{
		cout<<"Valid Username";
	}
	else
	{
		cout<<"Invalid Username";
	}
}
