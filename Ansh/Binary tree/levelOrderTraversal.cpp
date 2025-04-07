/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

 class Solution {
    
    public:
        vector<vector<int> > levelOrder(TreeNode* root) {
            //your code goes here
            vector<vector<int>>ans;
    
            if (root==nullptr){
                return ans;
            }
            queue<TreeNode*>q;
            q.push(root);
            while(!q.empty()){
                int size=q.size();
                vector<int> level;
                for(int i=0;i<size;i++){
                    TreeNode* node=q.front();
                    q.pop();
                    level.push_back(node->data);
                    if(node->left!=nullptr){
                        q.push(node->left);
                    }
                    if(node->right!=nullptr){
                        q.push(node->right);
                    }
    
                }
                ans.push_back(level);
            }
            return ans;
    
        }
    };