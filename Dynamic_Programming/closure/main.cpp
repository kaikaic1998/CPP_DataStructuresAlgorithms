// how to do closure in C++

#include <iostream>
#include <functional>
#include <unordered_map>

using namespace std;

function<int (int)> memoizedAddTo80 (){ // create a function object
    unordered_map<int, int> cache; // create map to store key and its value, in this case [8] = 85
    return [cache](int n) mutable{ // return lambda expression, must mutable because changing cahce map
        if (cache.count(n)){
            return cache[n];
        }
        else{
            cout << "long time" << endl;
            cache[n] = n + 80;
            return cache[n];
        }
    };
}

int main(){
    function<int (int)> memoized = memoizedAddTo80();

    cout << "1 " << memoized(5) << endl;
    cout << "2 " << memoized(5) << endl;

    return 0;
}
