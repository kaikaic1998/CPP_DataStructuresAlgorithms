// Fibonacci sequence

#include <iostream>

using namespace std;

int fibonacci(int index){ // O(2^n)
    if (index < 2){
        return index;
    }
    return fibonacci(index-1) + fibonacci(index-2);
}


int main(){

    cout << fibonacci(10) << endl;

    return 0;
}