#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){

    std::ifstream infile; 
    infile.open("input.txt");

    std::vector<int> v;
    std::vector<int> w;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp);

    }

    infile.close();

    std::ofstream outfile;

    outfile.open("outputtext.txt");

    for(int i = 0; i < v.size(); i++){

    outfile << v[v.size() - 1 - i] << std::endl; 

    }

}