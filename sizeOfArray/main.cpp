#include <iostream>
using namespace std;

int main(){
    // This method works with c++17

     int count[] = {0, 1, 2, 3, 4};    
     
     for (size_t i = 0; i < size(count); i++) // size function was introduced in c++17
     {
        cout << "count [" << i << "] " << count[i] <<endl;
     }

    // To get size of array if c++17 isn't supported

    int countN[] = {0, 1, 2, 3, 4}; 

    size_t countNew{sizeof(countN)/sizeof(countN[0])};

    cout << "Size is : "<<countNew<<endl;

    for (size_t i = 0; i < countNew; i++)
    {
         cout << "count [" << i << "] " << countN[i] <<endl;
    }
    

     
    return 0;
}