class Solution:
    def rotateArrayByOne(self, nums):
        temp = nums[0]
        for i in range(1, len(nums)):
            nums[i - 1] = nums[i]
        
        nums[-1] = temp


if __name__ == "__main__":
    solution = Solution()
    nums = [1, 2, 3, 4, 5]
    print("Original array:", nums)
    solution.rotateArrayByOne(nums)
    print("Array after rotation:", nums)