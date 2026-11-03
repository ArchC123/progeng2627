#include <iostream>

void mydivision(int a, int b, int &result, int &remainder){
    result = a / b;
    remainder = a % b;
}

int main(){

    int n1, n2;

    std::cout << "for a/b, input a, b" << std::endl;
    std::cin >> n1 >> n2;

    int result, remainder;

    mydivision(n1, n2, result, remainder);

    std::cout << "Result of integer division (" << n1 << " / " << n2 << "): " << result << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;

}





