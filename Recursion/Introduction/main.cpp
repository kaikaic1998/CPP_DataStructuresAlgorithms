#include <iostream>
#include <string>

using namespace std;

int counter {0};

string inception(){
    cout << counter << endl;
    if (counter > 3){
        return "done!";
    }
    counter++;
    return inception();
}

int main(){

    cout << inception() << endl;

    return 0;
}

// 1. Identify the base case
// 2. Identify the recursive case
// 3. Get closer and closer and return when needed. Usually have 2 returns