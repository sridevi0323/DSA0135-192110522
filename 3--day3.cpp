#include<iostream>
#include<math.h>
using namespace std;
class triangle
{
	public:
		void area(int a,int b,int c);
		void perimeter(int a,int b,int c);
};
void triangle::area(int a,int b,int c)
{
	float s=((a+b+c)/2.0),A=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"Area of a triangle is:"<<A<<"sq.units\n";
}
void triangle::perimeter(int a,int b,int c)
{
	cout<<"Perimeter of a triangle is:"<<a+b+c<<"units\n";
}
int main()
{
	triangle tr1;
	int side1=3,side2=4,side3=5;
	tr1.area(side1,side2,side3);
	tr1.perimeter(side1,side2,side3);
	return 0;
}
