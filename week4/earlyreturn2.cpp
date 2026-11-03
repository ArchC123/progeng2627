#include <iostream>

int smallest_factor(int n){
    for(int i = 2; i < n; i++){
        if ((n % i) == 0){
        return i;
        }
    }
    return 0;
}
int main() {
    int factor;
    int n;
    std::cout << "write an integer" << std::endl;
    std::cin >> n;
    factor = smallest_factor(n);
    std::cout << "smallest prime factor = " << factor << std::endl;
}