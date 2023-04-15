#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string longestCommonPrefix(vector<string>& strs){
    string prefix;
    sort(strs.begin(), strs.end());
    
    int first_string_size = strs.at(0).size();
    int last_string_size = strs.at(strs.size()-1).size();

    int shortest_word {0};
    if (first_string_size <= last_string_size){
        shortest_word = first_string_size;
    }
    else{
        shortest_word = last_string_size;
    }

    string first_word = strs.at(0);
    string last_word = strs.at(strs.size()-1);
    for (int i {0}; i < shortest_word; i++){
        if (first_word[i] == last_word[i]){
            prefix = prefix + first_word[i];
        }
        else{
            break;
        }
    }
    return prefix;
}

int main(){
    vector<string> strs = {"flower","flow","flight"};

    cout << longestCommonPrefix(strs) << endl;

    return 0;
}