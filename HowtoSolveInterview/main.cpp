#include <iostream>
#include <vector>

using namespace std;

bool containsCommonItem(vector<char>arr1, vector<char>arr2){
    for (size_t i{0}; i < arr1.size(); i++){
        for (size_t j{0}; j < arr2.size(); j++){
            if (arr1.at(i) == arr2.at(j)){
                return true;
            }
        }
    }
    return false;
}


int main (){

    vector<char>array1 = {'a', 'b', 'c', 'x'};
    vector<char>array2 = {'z', 'y', 'x'};

    cout << containsCommonItem(array1, array2) << endl;

    return 0;
}