/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

 class Solution{

    private:
    void preorder(TreeNode* root,vector<int> &ans){
        if(root==nullptr){
            return;
        }
        ans.push_back(root->data);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }
	public:
		vector<int> preorder(TreeNode* root){
	       //your code goes here
           vector<int> ans;
           preorder(root,ans);
           return ans;
		}

    
};