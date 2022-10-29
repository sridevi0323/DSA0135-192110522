#include<iostream>
using namespace std;
int main() {

	int a,b; 
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;

	for(int i=a+1;i<=b-1;i++) { // for loop starts from the next value of 'a' to 'b'-1 because we need to check if it's composite or not. 

		if( (i%2==0 && i!=2) || (i%3==0 && i!=3) || (i%5==0 && i!=5)){ // if condition checks if the number is prime or not as per these conditions 

		cout<<" "<<i;} } return 0;}


