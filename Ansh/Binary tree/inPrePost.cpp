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
    
    void inOrder(TreeNode* root,vector<int> & arr){
        if(root==nullptr){
            return;
        }
        inOrder(root->left,arr);
        arr.push_back(root->data);
        inOrder(root->right,arr);
    }
    void preOrder(TreeNode* root,vector<int> & arr){
        if(root==nullptr){
            return;
        }
        arr.push_back(root->data);
        preOrder(root->left,arr);
        preOrder(root->right,arr);
        
    }
    void postOrder(TreeNode* root,vector<int> & arr){
        if(root==nullptr){
            return;
        }
        
        postOrder(root->left,arr);
        postOrder(root->right,arr);
        arr.push_back(root->data);
        
    }
	public:
		vector<vector<int> > treeTraversal(TreeNode* root){
			//your code goes here
            vector<vector<int>>result;
            vector<int> arr;

            inOrder(root,arr);
            result.push_back(arr);
            arr.clear();

            preOrder(root,arr);
            result.push_back(arr);
            arr.clear();

            postOrder(root,arr);
            result.push_back(arr);

            return result;

		}
};