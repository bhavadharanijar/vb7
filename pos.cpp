#include <iostream>
using namespace std;

int main()
{
    int num1;
	cout << "\n\n Check whether a number is positive, negative or zero :\n";
	cout << "\n";  
	cout << " Input a number : ";
    cin >> num1;
    if(1<=num<=100000)
    {
        cout << " The entered number is positive.\n\n";
    }
    else if(num1 >100000)
    {
        cout << " The entered number is also negative.\n\n";
    }
    else if(num1<0)
    {
        cout << " The number is negative.\n\n";
    }
else
{
cout<<"invalid num";   
 return 0;
}
