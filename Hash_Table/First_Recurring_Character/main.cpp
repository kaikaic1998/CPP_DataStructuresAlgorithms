// Google Question
// Given an array = [2,5,1,2,3,5,1,2,4]:
// It should return 2

// Given an array = [2,1,1,2,3,5,1,2,4]:
// It should return 1

// Given an array = [2,3,4,5]:
// It should return undefined

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int first_recurring_character(vector<int> vec){ // O(n)
    unordered_map<int,int> mp;
    for (int element : vec){
        mp[element]++;
        if (mp[element] >= 2){
            return element;
        }
    }
    return -1;
}


int main(){
    vector<int> vec1 = {2,5,1,2,3,5,1,2,4};
    vector<int> vec2 = {2,1,1,2,3,5,1,2,4};
    vector<int> vec3 = {2,3,4,5};

    first_recurring_character(vec1);
    cout << first_recurring_character(vec2) << endl;
    cout << first_recurring_character(vec3) << endl;

    return 0;
}
