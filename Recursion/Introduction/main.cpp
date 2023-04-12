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
    // without the return
    // the "done" only returns to the latest function call
}

int main(){

    cout << inception() << endl;

    return 0;
}

// 1. Identify the base case
// 2. Identify the recursive case
// 3. Get closer and closer and return when needed. Usually have 2 returns