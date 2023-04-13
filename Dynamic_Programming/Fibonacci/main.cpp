// Fibonacci sequence

#include <iostream>
#include <functional>
#include <unordered_map>

using namespace std;

int fibonacci(int n){
    unordered_map<int, int> cache;
    function<int (int)> fib;
    fib = [&cache, &fib] (int n) {
        if (cache.count(n)){
            return cache[n];
        }
        else{
            if (n < 2){
                return n;
            }
            else{
                cache[n] = fib(n-1) + fib(n-2);
                return cache[n];
            }
        }
    };
    return fib(n);
}

int main(){

    cout << fibonacci(12) << endl;

    return 0;
}