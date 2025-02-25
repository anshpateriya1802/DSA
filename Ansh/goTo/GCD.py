class Solution:
    def GCD(self,k,num):
        sum=0
        max=1
        ans=[]
        for i in range(len(num)):
            for j in range(1,k+1):
                if num[i]%j==0 and k%j==0:
                    ans.append(j)
                    break
        for i in range(len(ans)):
            sum+=ans[i]
        print(sum)
    
if __name__ == "__main__":

    sol = Solution()
    k=int(input())

    num = list(map(int, input("Enter multiple values\n").split(',')))

    sol.GCD(k,num)
