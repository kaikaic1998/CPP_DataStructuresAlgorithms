#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector <std::string> vec = {"a", "b", "c", "d"};

    std::cout << vec.at(1) << std::endl; // O(1)
    vec.push_back("e"); // O(1)
    vec.pop_back(); // O(1)

    for (std::string value : vec){
        std::cout << value << std::endl;
    }

    vec.insert(vec.begin(), "x"); // O(n)
    // because iterator loop through the whole list to re-assign the index of elements

    vec.erase(vec.end()-2, vec.end()); // O(n)
    // remove the last 2 elements

    for (std::string value : vec){
        std::cout << value << std::endl;
    }


}