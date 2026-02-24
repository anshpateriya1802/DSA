class Solution:
    def moveZeroes(self, nums):
        temp=[]
        n=len(nums)
        c=0
        for i in range(n):
            if nums[i]!=0:
                temp.append(nums[i])
            else:
                c+=1
        nums.clear()
        nums.extend(temp)
        nums.extend([0]*c)
if __name__ == "__main__":
    nums = [0, 1, 0, 3, 12]
    sol = Solution()
    sol.moveZeroes(nums)
    print(nums)  # Output should be [1, 3, 12, 0, 0]