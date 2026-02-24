/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     int data;
 *     TreeNode *left;m
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

 class Solution {	
    public:	
        TreeNode* searchBST(TreeNode* root, int val) {
            //your code goes here
            while(root!=nullptr && root->data!=val){
                root=val<root->data? root->left:root->right;
            }
            return root;
        }
    };