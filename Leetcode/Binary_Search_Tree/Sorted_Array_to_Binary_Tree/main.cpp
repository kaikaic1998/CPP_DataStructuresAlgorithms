/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class My_Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size() == 0){
            return NULL;
        }
        int size = nums.size();
        int mid = mid = size / 2;
        TreeNode* newNode = new TreeNode(nums[mid]);

        vector<int> left_vec = {nums.begin(), nums.begin()+mid};
        vector<int> right_vec = {nums.begin()+mid+1, nums.end()};

        newNode->left = sortedArrayToBST(left_vec);
        newNode->right = sortedArrayToBST(right_vec);
        return newNode;
    }
};

class Better_Solution {
    TreeNode* sortedArrayToBST(vector<int>& nums, int start, int end){
        if(end<=start) return NULL; 
        int midIdx=(end+start)/2;
        TreeNode* root=new TreeNode(nums[midIdx]);
        root->left=sortedArrayToBST(nums, start, midIdx);
        root->right=sortedArrayToBST(nums, midIdx+1,end);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums, 0,nums.size());
    }
};