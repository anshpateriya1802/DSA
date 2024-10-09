# *****
# ****
# ***
# **
# *

class Solution:
    def pat(self,n):
     for i in range(n,0,-1):
        print("*"*i)
           

if __name__=="__main__":
    s=Solution()
    s.pat(int(input()))