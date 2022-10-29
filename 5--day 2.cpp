#include<iostream>
using namespace std;
int main() 
{

	int n,m, i = 1, count = 0;

	cout << "Enter a number: "; cin >> n;

	while (i <= n) {
		if (n % i == 0) { // if the number is divisible by any factor of itself then it is a factor. 
			count++; // increment the counter for each time it occurs. 
	// this will give us the total number of factors of that particular number. 
    }   i++;     // increment to check next factor. 

    } cout << endl << "The total no. of factors are: " << count<<endl;

    int k=1,flag=0,j=1,mul=0; while(k<=count)
	{ 
	cout<<"Enter the position of the factor you want to print:"<<endl ; 
	cin>>k;
	} flag==0?mul++ : mul-- ; j++ ;
	 while(j!=(k-1))
	 { 
	 m+=2*mul+1 ; j++ ;
	 } 
	 cout<<"The Nth Factor is:"<<m/2+((k%2)?(-mul):(mul))<<endl; 
	 return 0;
}

