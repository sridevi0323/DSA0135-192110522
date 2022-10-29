#include<iostream>
using namespace std;
class rectangle
{
	private:
	int a,b;
	public:
		rectangle(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		int area()
		{
			return this->a*this->b;
		}
};
int main()
{
	rectangle obj=rectangle(3,4);
	cout<<obj.area()<<"\n";
	return 0;
}
