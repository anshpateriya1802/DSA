# recursive method

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
        



# iterative method

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.data = val
#         self.left = left
#         self.right = right
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.data = val
#         self.left = left
#         self.right = right


#iterative method

class Solution:
       
        
    def postorder(self, root):
        result=[]
        st=[]
        if root:
            st.append(root);
        while st:
            node=st.pop()
            result.append(node.data)
            if node.left:
                st.append(node.left)
            if node.right:
                st.append(node.right)

        result.reverse()
        return result
