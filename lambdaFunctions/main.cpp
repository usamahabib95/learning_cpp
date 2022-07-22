#include <iostream>


int main(){

  // Instantaly invoked lambda function | anonymous lambda
  [](){
    std::cout << "This is a lambda function " << std::endl;
  }();

  // lambda with handle

  auto lambdaFunc = [](){
     std::cout << "This is a lambda function " << std::endl;
  };

  lambdaFunc();

  // Instantly invoked lambda with return value

  auto lambdaRetVal = [](){
    return "This is a lambda function";
  }();

  std::cout << lambdaRetVal << std::endl;

  // calling lambda with handle, and returning a value

  auto lambdaRetValFunc = [](){
    return "This is a lambda function";
  };

  auto retVal = lambdaRetValFunc();

  std::cout << retVal << std::endl;

  // passing params to anonymous lambda

  [](int a, int b){
    std::cout << "The sum is " << a+b << std::endl;
  }(10,5);

  // Passing params to lambda with handle

  auto sum = [](int a, int b){
    std::cout << "The sum is " << a+b << std::endl;
  };

  sum(1,2);

  // defining return type for lambda with handle

  auto sum1 = [](int a, int b)->int{
    return a+b;
  };

  std::cout << "The sum is " << sum1(10,10) << std::endl;


  // using capture by value in lambda functions

  int num1 = 10;
  int num2 = 100;

  auto sum2 = [num1, num2 ]()
  {
    std::cout << "The sum is : " << num1 + num2 << std::endl;
  };

  sum2();

  // using capture by reference in lambda function

   auto sum3 = [&num1, &num2 ]()
  {
    std::cout << "The sum is : " << num1 + num2 << std::endl;
  };

  sum3();



  return 0;




    
}

