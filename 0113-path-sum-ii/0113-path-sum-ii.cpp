class Solution {
public:
    vector<vector<int>> ans;

    void traverse(TreeNode* root, int targetSum, int sum, vector<int> temp){
        if(root == NULL) return;

        temp.push_back(root->val);
        sum += root->val;

        if(sum == targetSum && root->left == NULL && root->right == NULL){
            ans.push_back(temp);
        }

        traverse(root->left, targetSum, sum, temp);
        traverse(root->right, targetSum, sum, temp);
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> temp;
        traverse(root, targetSum, 0, temp);
        return ans;
    }
};