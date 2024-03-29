//872. Leaf-Similar Trees

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
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        vector<int> leaf1, leaf2;

        helper(root1, leaf1);
        helper(root2, leaf2);

        return leaf1==leaf2;
        
    }

    void helper(TreeNode* root, vector<int> &leaf){

        //base
        if(root == nullptr) return;

        //logic
        if(root->left == NULL && root->right == NULL){
            leaf.push_back(root->val);
        }

        helper(root->left, leaf);
        helper(root->right, leaf);
    }
};