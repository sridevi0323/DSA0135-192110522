#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, temp, rem, oct = 0, i = 0;
    cout << "Enter an octal number : ";
    cin >> num;
    temp = num;
    while(temp != 0)
    {
        rem = temp % 10;
        oct += rem * pow(8, i++);
        temp = temp / 10;
    }
    cout << "\nDecimal equivalent of " << num << " is : " << oct;
    return 0;
}

