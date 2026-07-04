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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (root==nullptr)   return {};
        queue <TreeNode*> q; q.push(root);
        //cout << root->val << " ";
        
        while (!q.empty()){           
            vector<int> curr; 
            int qsize = q.size();

            for(int i=0; i<qsize;i++){
                TreeNode* node = q.front();
                q.pop();
                curr.push_back(node->val);

                if(node->left!=nullptr) q.push(node->left);
                if(node->right!=nullptr) q.push(node->right);
            }

            res.push_back(curr);    
        }
        return res;
    }
};