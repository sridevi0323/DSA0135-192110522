#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10],n,i,j,k=0;
	cout<<"Enter the size of array:";
	cin>>n;
	cout<<"Enter the element:";
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			if(a[i]==b[j])
			break;
		}
		if(j=k)
		{
			b[k]=a[i];
			k++;
		}
	}
	cout<<"Sorted array after deletion:"<<b[i];
	for(i=0;i<k;i++)
	cout<<b[i]<<" ";
	return 0;
}
