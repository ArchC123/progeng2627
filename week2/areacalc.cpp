#include <iostream>

int main(){
    double a, b, c;

    std::cout << "what is the width?" << std::endl;
    std::cin >> a;

    std::cout << "what is the length?" << std::endl;
    std::cin >> b;

    c = a * b;

    std::cout << a << " * " << b << " = " << c << std::endl;
}