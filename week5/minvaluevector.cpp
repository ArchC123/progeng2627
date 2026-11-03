#include <iostream>
#include <vector>


int min_vector_element(const std::vector<double>& vin){

    int index = 0;

    for(int i = 0; i < vin.size(); i++){
        if (vin[i] < vin[index]){
        index = i;
        }

    }
    return index;

}

int main(){

    std::vector<double> v{2, 4, 8, 11, 56};

    std::cout << (min_vector_element(v)) << std::endl;
}
