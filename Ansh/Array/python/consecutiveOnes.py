class Solution:
    def findMaxConsecutiveOnes(self, nums):
        maxx=0
        c=0
        for num in nums:
            if num==1:
                c+=1
                maxx=max(maxx,c)
            else:
                
                c=0
        return maxx
if __name__ == "__main__":
    nums = [1, 1, 0, 1, 1, 1]
    solution = Solution()
    print(solution.findMaxConsecutiveOnes(nums))