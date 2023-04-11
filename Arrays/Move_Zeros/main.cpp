// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

// Example 1:
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

// Example 2:
// Input: nums = [0]
// Output: [0]

// Follow up: Could you minimize the total number of operations done?

#include <iostream>
#include <vector>

using namespace std;

class my_solution { // O(n^2)
public:
    void moveZeroes(vector<int>& nums) {
        // when array has no or one element
        if(nums.size() == 0)
            cout << "No element found" << endl;
        else if(nums.size() == 1){
            if (nums[0] == 0)
                cout << "[0]" << endl;
            else
                cout << "No 0 found" << endl;
        }
        else{
            // Move zeros operation
            int num_of_zero{};
            for(size_t i{0}; i < nums.size(); i++){ // O(n^2)
                if (nums.at(i) == 0){
                    nums.erase(nums.begin()+i); // O(n)
                    num_of_zero++;
                }
            }
            for(int i{0}; i < num_of_zero; i++){
                nums.push_back(0);
            }

            // display vector
            cout << "[";
            for(size_t i{0}; i < nums.size(); i++){
                if (i == nums.size()-1){
                    cout << nums.at(i);
                }
                else{
                    cout << nums.at(i) << ",";
                }
            }
            cout << "]";
        }
    }
};

class better_solution { // O(n)
public:
    void moveZeroes(vector<int>& nums) {
        // when array has no or one element
        if(nums.size() == 0)
            cout << "No element found" << endl;
        else if(nums.size() == 1){
            if (nums[0] == 0)
                cout << "[0]" << endl;
            else
                cout << "No 0 found" << endl;
        }
        else{
            // Move zeros operation
            int n=nums.size(),j,i;
            j=0; // loop through arrays
            i=0; // increment only when element is not 0
            for (; j < n; j++) {
                if(nums[j]!=0){ // do if element is not 0
                    nums[i]=nums[j]; // copy none 0 element to the i position
                    i++; // increment i position
                }
            }
            for (; i < n; i++) { // after above loop, all none 0 element are move to the front
                nums[i]=0; // replace remaining array with 0
            }

            // display vector
            cout << "[";
            for(size_t i{0}; i < nums.size(); i++){
                if (i == nums.size()-1){
                    cout << nums.at(i);
                }
                else{
                    cout << nums.at(i) << ",";
                }
            }
            cout << "]";
        }
    }
};

int main(){
    better_solution result;
    vector<int> nums1 = {0,1,0,3,12};
    result.moveZeroes(nums1);

    vector<int> nums2 = {0};


    return 0;
}