#include <iostream>
#include <unordered_map>

using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> Ro_to_in{
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

    int number{0};
        
    for(size_t i {0}; i < s.size(); i++){
        if(Ro_to_in[s[i]] >= Ro_to_in[s[i+1]]){
            number += Ro_to_in[s[i]];
        }
        else{
            number += (Ro_to_in[s[i+1]] - Ro_to_in[s[i]]);
            i++;
        }
    }
    return number;
}

int romanToInt_better(string s) {
    unordered_map<char, int> Ro_to_in{
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

    int number{0};
        
    for(size_t i{0}; i < s.size(); i++){
        if(Ro_to_in[s[i]] < Ro_to_in[s[i+1]]){
            number = number - Ro_to_in[s[i]];
        }
        else{
            number = number + Ro_to_in[s[i]];
        }
    }
        return number;
}

    int main(){

        string s = {"MCMXCIV"};
        cout << romanToInt(s) << endl;
        cout << romanToInt_better(s) << endl;

        return 0;
    }