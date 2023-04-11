// Given an integer array nums, return true if any value appears at least twice in the array, 
// and return false if every element is distinct.

// Example 1:
// Input: nums = [1,2,3,1]
// Output: true

// Example 2:
// Input: nums = [1,2,3,4]
// Output: false

// Example 3:
// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// Output: true

#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>

using namespace std;

class My_Solution {
public:
    bool containsDuplicate(vector<int>& nums) { // O(n)
        int size = nums.size();

        if(size <= 1){
            return false;
        }
        else{
            unordered_set<int> set;
            for (int i{0}; i < size; i++){
                if (set.count(nums.at(i))){
                    return true;
                }
                else{
                    set.insert(nums.at(i));
                }
            }
        }
    return false;
    }
};

class Better_Solution_Unordered_Set {
public:
    bool containsDuplicate(vector<int>& nums) { // O(n)
        return nums.size() > unordered_set<int>(nums.begin(),nums.end()).size();
    }
};

class Better_Solution_Map {
public:
    bool containsDuplicate(vector<int>& nums) { // O(n)
        map<int,int> mp;
        for(auto i : nums) mp[i]++; // increment mapped value of the same key 
        for(auto i : mp){
            if(i.second >= 2) return true; // if mapped value of the same key is >= 2, then it is a duplicate
        }
        return false;
    }
};

int main(){
    cout << boolalpha;
    Better_Solution_Unordered_Set result;

    vector<int> nums1 = {1,2,3,1};
    cout << result.containsDuplicate(nums1) << endl;

    vector<int> nums2 = {1,2,3,4};
    cout << result.containsDuplicate(nums2) << endl;

    vector<int> nums3 = {1,1,1,3,3,4,3,2,4,2};
    cout << result.containsDuplicate(nums3) << endl;

    return 0;
}