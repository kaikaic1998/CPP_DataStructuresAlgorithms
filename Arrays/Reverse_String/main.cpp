// Create a function that reverses a string
// "Hi my name is Andrei" should be
//"ierdnA si eman yM iH"

#include <iostream>
#include <string>
#include <algorithm>

std::string reverse_string(std::string);

int main (){
    std::string sentence = {"Hi my name is Andrei"};
    
    std::cout << reverse_string(sentence) << std::endl;
    
    return 0;
}

// method 1, use build-in algorithm std::reserve
// std::string reverse_string(std::string temp_sentence){
//     std::reverse(temp_sentence.begin(), temp_sentence.end()); // O(n)
//     return temp_sentence;
// }

// method 2, use for loop
std::string reverse_string(std::string temp_sentence){
    std::string reverse_sentence = temp_sentence;
    size_t j{temp_sentence.length()-1};
    for(size_t i{0}; i < temp_sentence.length(); i++){ // O(n)
        reverse_sentence.at(i) = temp_sentence.at(j);
        j--;
    }
    return reverse_sentence;
}