#include <iostream>
using namespace std;

int main()
{
    int value1 {10};
    int value2 {-300};
    int result {value1 + value2};

    cout << "Result is : " << result << endl;
    cout << "value1 is : " << value1 << endl;
    cout << "value2 is : " << value2 << endl;


    signed int value3 {10};
    signed int value4 {-300};
    signed int result1 {value1 + value2};

    cout << "Result is : " << result1 << endl;
    cout << "value3 is : " << value3 << endl;
    cout << "value4 is : " << value4 << endl;

    return 0;
}