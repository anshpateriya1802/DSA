/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/‸

 class Solution{
    private:
    void recursiveInorder(TreeNode* root, vector<int> &arr){
        if(root==nullptr){
            return;
        }
        recursiveInorder(root->left,arr);
        arr.push_back(root->data);
        recursiveInorder(root->right,arr);
    }
	public:
		vector<int> inorder(TreeNode* root){
	        //your code goes here
            vector <int> arr;
            recursiveInorder(root,arr);
            return arr;

		}
};
