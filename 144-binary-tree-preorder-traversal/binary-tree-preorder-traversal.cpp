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
    void pre(TreeNode* node,vector<int>& ans){
        if(node==nullptr)return ;
        // root mai kuch kaam
        ans.push_back(node->val);
        pre(node->left,ans);
        pre(node->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        pre(root,ans);
        return ans;
        // if (root==NULL) return res;
        // res.push_back(root->val);

        // vector <int> left = preorderTraversal(root->left);
        // for(int x: res) res.push_back(x);
    
        // vector <int> right = preorderTraversal(root->right);
        // for(int x: res) res.push_back(x);

        // return res;
    }
};