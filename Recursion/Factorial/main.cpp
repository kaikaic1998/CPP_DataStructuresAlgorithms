// factorial with recursion

#include <iostream>

using namespace std;

int factorial_recursion(int num){ // O(n)
    if (num == 2){
        return 2;
    }
    return num * factorial_recursion(num-1);
}

int factorial_normal(int num){ // O(n)
    int result{1};
    for (int i{2}; i <= num; i++){
        result = result * i;
    }
    return result;
}

int main(){

    cout << factorial_normal(5) << endl;

    cout << factorial_recursion(5) << endl;

    return 0;
}