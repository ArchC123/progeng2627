#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin){

for(int i = 0; i < vin.size(); i++){

    if(s == vin[i]){
        return 1;
    }

}
    return 0;
}


void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){

for(int i = 0; i < vin1.size(); i++){
    vout.push_back(vin1[i]);
}

for(int i = 0; i < vin2.size(); i++){

    if(search_vector(vin2[i], vout) == 0){
    vout.push_back(vin2[i]);
    }
}


}


void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){

    for(int i = 0; i < vin1.size(); i++){
        if(search_vector(vin1[i], vin2) == 1){
            if(search_vector(vin1[i], vout) == 0){
                vout.push_back(vin1[i]);
            }
        }
    }
}


int main(){

    std::ifstream infile;
    infile.open("warehouse1.txt");

    std::vector<std::string> v1;

    std::string tmp;

    while(infile >> tmp){
        v1.push_back(tmp);
    }
    infile.close();

    std::ifstream infile2;
    infile2.open("warehouse2.txt");

    std::vector<std::string> v2;

    while(infile2 >> tmp){
        v2.push_back(tmp);
    }
    infile2.close();

    std::vector<std::string> vunion;
    union_vector(v1, v2, vunion);

    std::vector<std::string> vintersect;
    intersection_vector(v1, v2, vintersect);

    std::ofstream outfile1("union.txt");

    for(int i = 0; i < vunion.size(); i++){
        outfile1 << vunion[i];
    }

    outfile1.close();

    std::ofstream outfile2("intersection.txt");

    for(int i = 0; i < vintersect.size(); i++){
        outfile2 << vintersect[i];
    }

    outfile2.close();
}
