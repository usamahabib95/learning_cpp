#include <iostream>

int main() {
  
    int x{122};
    int &refer{x};
    std::cout << "Accessing value from referer variable " << refer << std::endl;
    std::cout << "Accessing the variable referred directly " << x << std::endl;
    
    refer = 2;
    std::cout  << "Accessing value from referer variable after updating value by using the referer variable " << refer << std::endl;
    std::cout << "Accessing the variable referred directly " << x << std::endl;

    return 0;
}