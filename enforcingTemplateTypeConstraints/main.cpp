#include <iostream>
#include <concepts>
using namespace std;

template <typename T> 
requires integral<T> 
T maximum(T arg1, T arg2){

    return arg1 + arg2;

}

int main(){

    cout << "Sum is : " << maximum(10,20) << endl;

    cout << "Error by using wrong type " << maximum (10.1,20.1) << endl;

    return 0;

}

