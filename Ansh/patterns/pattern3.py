# pattern is
# 1
# 12
# 123
# 1234
# 12345

class Solution:
    def pat(self,n):
        for i in range(1,n+1):
            for j in range(1,i+1):
                print(j,end='')
            print()


if __name__=="__main__":
    s=Solution()
    s.pat(int(input()))