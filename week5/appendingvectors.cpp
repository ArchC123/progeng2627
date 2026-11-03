#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){

    for(int i = 0; i < vin1.size(); i++){
    vout.push_back(i);
    }

    for(int i = 0; i < vin2.size(); i++){
    vout.push_back(i);
    }

}

int main(){

    std::vector<int> vin1 = {3, 7, 2, 8};
    std::vector<int> vin2 = {1, 7, 9, 11};
    std::vector<int> vout;

    append_vectors(vin1, vin2, vout);


    for(int i = 0; i < vout.size(); i++){
        std::cout << vout[i];
    }

}



