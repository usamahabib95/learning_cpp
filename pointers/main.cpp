#include<iostream>
using namespace std;

int main(){
    
    int *ptrToVar{nullptr};
    int count{9};

    ptrToVar = &count;

    cout << "Value of counter by dereferencing pointer is : " << *ptrToVar << endl;

    // Dynamic allocated pointer
    int *ptrToNewVar{nullptr};

    ptrToNewVar = {new int(count)};

    cout << "Value of counter by dereferencing dynamic pointer is : " << *ptrToNewVar << endl;

    // Releasing memory
    delete ptrToNewVar;
    ptrToNewVar = {nullptr};



    return 0;
}