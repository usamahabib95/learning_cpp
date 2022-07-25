#include<iostream>
#include <concepts>
using namespace std;


template <typename T> concept MyCustomIntegral = is_integral_v<T>;

template <typename T> requires MyCustomIntegral<T> T summation(T arg1, T arg2){

    cout << "The first argument is " << arg1 << " the second argument is " << arg2 <<endl;

    return 0;

}

int main()
{

    summation(10,100);
    return 0;
}

