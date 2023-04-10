// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// Example 2:
// Input: nums = [3,2,4], target = 6
// Output: [1,2]

// Example 3:
// Input: nums = [3,3], target = 6
// Output: [0,1]

#include <vector>
#include <iostream>

using namespace std;

class Solution_for_sorted_array{
public:
    int left_index;
    int right_index;

    vector<int> twoSum (const vector<int> &nums, int target){ // O(n)

        left_index = 0;
        right_index = nums.size()-1;

        while(left_index < right_index){
            int sum = nums.at(left_index) + nums.at(right_index);
            if( sum < target){
                left_index++;
            }
            else if ( sum > target){
                right_index--;
            }
            else{
                return {left_index, right_index};
            }
        }
    return {};
    }
};

class Solution_for_unsort_array{
public:
    int left_index;
    int right_index;

    vector<int> twoSum (const vector<int> &nums, int target){ // O(n)

    }
};

int main(){
    //Example 1
    vector<int> nums1 = {2,7,11,15};
    int target1 {9};

    Solution_for_sorted_array result1;
    result1.twoSum(nums1, target1);
    cout << "[" << result1.left_index << "," << result1.right_index << "]" << endl;

    //Example 2
    vector<int> nums2 = {3,2,4};
    int target2 {6};

    Solution_for_sorted_array result2;
    result2.twoSum(nums2, target2);
    cout << "[" << result2.left_index << "," << result2.right_index << "]" << endl;

    //Example 3
    vector<int> nums3 = {3,3};
    int target3 {6};

    Solution_for_sorted_array result3;
    result3.twoSum(nums3, target3);
    cout << "[" << result3.left_index << "," << result3.right_index << "]" << endl;

    return 0;
}