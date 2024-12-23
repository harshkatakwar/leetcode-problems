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

    int countSwaps(vector<int> values){
        int swaps=0;
        vector<int> sorted=values;
        sort(sorted.begin(),sorted.end());

        unordered_map<int,int> mp;
        for(int i=0;i<values.size();i++){
            mp[values[i]]=i;
        }

        for(int i=0;i<values.size();i++){
            if(values[i]!=sorted[i]){
                swaps++;
                int pos=mp[sorted[i]];
                mp[values[i]]=pos;
                mp[sorted[i]]=i;
                swap(values[pos],values[i]);
            }
        }
        return swaps;

    }

    int minimumOperations(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int swaps=0;
        while(!q.empty()){
            int size=q.size();
            vector<int> values(size);

            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();
                q.pop();
                values[i]=curr->val;

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            swaps+=countSwaps(values);
        }
        return swaps;
    }
};