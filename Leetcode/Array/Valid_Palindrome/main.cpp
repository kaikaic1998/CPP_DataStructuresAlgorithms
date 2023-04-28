class My_Solution {
public:
    bool isPalindrome(string s) {
        int size = s.size();
        if (size <= 1){
            return true;
        }
        deque<char> deq;
        for (int i {0}; i < size; i++){
            if (isalnum(s[i])){
                deq.push_back(tolower(s[i]));
            }
        }

        int mid = deq.size()/2;
        for (int i {0}; i < mid; i++){
            if(deq.front() == deq.back()){
                deq.pop_front();
                deq.pop_back();
            }
        }
        if (deq.size() <= 1){
            return true;
        }
        return false;
    }
};

class Better_Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size(), l = 0, r = n - 1;
        while (l < r) {
            while (l < r && !isalnum(s[l])) {
                l++;
            }
            while (l < r && !isalnum(s[r])) {
                r--;
            }
            if (tolower(s[l++]) != tolower(s[r--])) {
                return false;
            }
        }
        return true;
    }
};