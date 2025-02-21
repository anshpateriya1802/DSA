class Solution:
    def movingZerotoEnd(self,nums):
        for i in range(len(nums)):
            if nums[i]==0:
                nums.append(nums[i])
                nums.pop(i)
        return nums
if __name__ == "__main__":
    nums = [0, 1, 4, 0, 5, 2]
    solution = Solution()
    print(solution.movingZerotoEnd(nums))