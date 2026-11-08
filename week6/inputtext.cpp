#include <iostream>
#include <fstream>  

int main(){
    std::ifstream infile;

    infile.open ("input.txt");

    if (infile.is_open()){
        int tmp;
        infile >> tmp;
        std::cout << tmp << std::endl;

    }

    else{
        std::cout << "error opening file";

    }

}