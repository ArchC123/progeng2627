#include <iostream>
#include <vector>

int main(){

    std::vector<int> v;
    int n;

    std::cout << "please enter n" << std::endl;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        int tmp;
        std::cout << "please enter a number" << std::endl;
        std::cin >> tmp;
         v.push_back(tmp);
    }

    int s;

    std::cout << "please enter s" << std::endl;
    std::cin >> s;

    int count = 0;

    for(int i = 0; i < v.size(); i++){
        if (v[i] == s){
        count++;
        }

    }

    std::cout << count;

}
   
    



