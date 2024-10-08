# pattern is:
# *****
# *****
# *****
# *****
# *****

class Solution:
    def pat(self,num):
        for i in range(num):
            for j in range(1,num+1):
                if j==num:
                    print("*")
                else:
                    print("*",end='')
if __name__=="__main__":
    s=Solution()
    s.pat(int(input()))