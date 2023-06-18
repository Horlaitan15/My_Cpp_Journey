#include <iostream>

int main(){
    int int1, int2, sum;

    std::cout << "Input the first integer: ";
    std::cin >> int1;
    std::cout << "Input the second integer: ";
    std::cin >> int2;

    sum = int1 + int2;

    std::cout << "The sum is "<<sum<< std::endl;
    return 0;

}
