#include <iostream>
#include <cstring>
#include <string>
#include <array>

using namespace std;

// void findNemo(const char *arr[]){
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout << sizeof(arr);
//     cout << sizeof(arr[0]);
//     for (int i {0}; i < size; i++){
//         if (strcmp(arr[i], "nemo") == 0){
//             cout << "Found NEMO!" << endl;
//         }
//     }
// }
// void findNemo(string arr[]){
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout << sizeof(arr) << endl;

//     cout << sizeof(arr[0]) << endl;
//     for (int i {0}; i < size; i++){
//         if (arr[i] == "nemo"){
//             cout << "Found NEMO!" << endl;
//         }
//     }
// }
void findNemo(array<string, 1> arr){
    for(size_t i{0}; i < arr.size(); i++){
        if(arr.at(i) == "nemo"){
            cout << "Found NEMO!" << endl;
        }
    }
}

int main(){
    // const char* nemo[] = {"nemo"};
    array<string, 1> nemo = {"nemo"};

    array<string, 10> everyone;
    everyone.fill("person");

    array<string, 10000> large;
    large.fill("person");

    findNemo(nemo);// O(n) --> Linear Time
    // findNemo(nemo): O(1)
    // findNemo(everyone): O(10)
    // findNemo(large): O(10000)

    return 0;
}