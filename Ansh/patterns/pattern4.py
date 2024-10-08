# pattern is
# 1
# 22
# 333
# 4444
# 55555

class Solution:
    def pat(self,n):
     for i in range(1,n+1):
            for j in range(1,i+1):
                print(i,end='')
            print()   

if __name__=="__main__":
    s=Solution()
    s.pat(int(input()))