class Solution {
public:
    int search(vector<int>& inorder, int left, int right, int value) {
        for (int i = left; i <= right; i++) {
            if (inorder[i] == value)
                return i;
        }
        return -1;
    }

    TreeNode* help(vector<int>& preorder, vector<int>& inorder,
                   int& preIdx, int left, int right) {

        if (left > right)
            return NULL;

        TreeNode* root = new TreeNode(preorder[preIdx++]);

        int inIdx = search(inorder, left, right, root->val);

        root->left = help(preorder, inorder, preIdx, left, inIdx - 1);
        root->right = help(preorder, inorder, preIdx, inIdx + 1, right);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIdx = 0;
        return help(preorder, inorder, preIdx, 0, inorder.size() - 1);
    }
};