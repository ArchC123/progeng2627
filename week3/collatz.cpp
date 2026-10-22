#include <iostream>

int main(){
    int n;

    std::cout << "please enter an integer" << std::endl;
    std::cin >> n;

    while(n != 1){

    if( (n % 2) == 0){ 
        n = n / 2;
    }else{
        n = 3 * n + 1   ;

    }
    std::cout << n << std::endl;
    }
    



 


}