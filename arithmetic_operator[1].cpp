#include <iostream>
using namespace std;

int main()
{
double num1, num2, sum, diff, product, quotient;

 


cout << "Enter the 1st number: ";
cin >> num1;

cout << "Enter the 2nd number: ";
cin >> num2;

sum = num1 + num2;
cout << "The sum of 1st no. and 2nd no. is: " << sum << endl;

diff = num1 - num2;
cout << "The difference of 1st no. and 2nd no. is: " << diff << endl;

product = num1 * num2;
cout << "The product of 1st no. and 2nd no. is: " << product << endl;

quotient = num1 / num2;
cout << "The quotient of 1st no. and 2nd no. is: " << quotient << endl;
}