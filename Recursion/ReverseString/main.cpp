// Fibonacci sequence

#include <iostream>
#include <string>

using namespace std;
 

void reverseString(string &sentence, int i = 0){ // O(n)
    int j = sentence.size()-1;
    if (i == j/2){
        return;
    }
    char temp = sentence[i];
    sentence[i] = sentence[j-i];
    sentence[j-i] = temp;
    reverseString(sentence, i+1);
}


int main(){
    string sentence = "yoyo mastery";
    reverseString(sentence);
    cout << sentence << endl;

    return 0;
}