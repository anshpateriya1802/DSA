# pattern is:
# *
# **
# ***
# ****
# *****

class Solution:
    def pat(self,n):
        for i in range(1,n+1):
            print(i*"*")
    

if __name__=="__main__":
    s=Solution()
    s.pat(int(input()))