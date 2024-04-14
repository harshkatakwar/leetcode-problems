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
    int util(TreeNode* node, int isLeft){
        if(!node){
            return 0;
        }

        if(!node->left && !node->right){
            return isLeft?node->val:0;
        }

        int ls=util(node->left,1);
        int rs=util(node->right,0);
        return ls+rs;
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int ans=util(root,0);
        return ans;
    }
};