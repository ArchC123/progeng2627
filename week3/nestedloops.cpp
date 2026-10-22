#include <iostream>

int main(){
    int n;
    std::cin >> n;

    for(int c = 0; c < n; c++){

        for(int c2 = 0; c2 < n; c2++){
        std::cout << "*"; 

        }
        // there is no << std::endl
        // because we want them on the same row
    }

}