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
class Solution {
public:
   public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return bstFromPreorder(preorder.begin(), preorder.end());
    }

    TreeNode* bstFromPreorder(vector<int>::iterator l, vector<int>::iterator r) {
        TreeNode* root = new TreeNode(*l);

        auto it = upper_bound(l+1, r, *l);
        // NOT null left tree
        if(it != l+1) root->left = bstFromPreorder(l+1, it);
        // NOT null right tree
        if(it != r) root->right = bstFromPreorder(it, r);

        return root;

    }
};
