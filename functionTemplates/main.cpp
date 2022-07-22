#include<iostream>
using namespace std;

template <typename T> T sum(T arg1, T arg2);

int main(){

    cout << "The sum is " << sum(10,20) << endl;
    cout << "The sum is " << sum(10.6,20.1) << endl;
    return 0;
}

template <typename T> T sum(T arg1, T arg2){

    return arg1 + arg2;

}