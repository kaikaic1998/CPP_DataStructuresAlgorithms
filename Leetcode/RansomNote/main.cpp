class My_Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;
        for (size_t i{0}; i < magazine.size(); i++){
            mp[magazine[i]]++;
        }
        for (size_t i{0}; i < ransomNote.size(); i++){
            mp[ransomNote[i]]--;
            if (mp[ransomNote[i]] < 0){
                return false;
            }
        }
        return true;
    }
};