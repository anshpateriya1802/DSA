# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.data = val
#         self.left = left
#         self.right = right

class Solution:
    def postOrder(self,root,arr):
        if root is None:
            return
        self.postOrder(root.left,arr)
        self.postOrder(root.right,arr)
        arr.append(root.data);
        
    def postorder(self, root):
        arr=[]
        self.postOrder(root,arr);
        return arr;
        #your code goes here