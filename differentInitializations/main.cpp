#include <iostream>
using namespace std;

int main()
{
    // Braced initializers
    int number;
    int number1{2};
    int number2{4};
    int sum{number1 + number2};

    // int number3{3.6}; //Error braced initialzer won't allow type mismatch

    cout << "number " << number << endl; // print garbage
    cout << "number1 " << number1 << endl;
    cout << "number2 " << number2 << endl;
    cout << "sum " << sum << endl;

    // Functional initialization
    int number4;
    int number5(2);
    int number6(4);
    int sum1(number1 + number2);

    int number7(3.6); // Initialization is allowed but it will trim the decimal part

    cout << "number4 " << number4 << endl; // print garbage
    cout << "number5 " << number5 << endl;
    cout << "number6 " << number6 << endl;
    cout << "number7 " << number7 << endl;
    cout << "sum " << sum1 << endl;

    return 0;
}