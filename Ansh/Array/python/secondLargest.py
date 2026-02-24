class Solution:
    def secondLargestElement(self, nums):
        mac=nums[0]
        for i in range(len(nums)):
            if nums[i]>=mac:
                mac=nums[i]
        macc=0
        c=0
        for i in range(len(nums)):
            if nums[i]==mac:
                c+=1
            else:
                if nums[i]>=macc:
                    macc=nums[i]
        if c==len(nums):
            return -1
        else:
            return macc

if __name__ == "__main__":
    nums = [int(x) for x in input("Enter the numbers separated by space: ").split()]
    solution = Solution()
    result = solution.secondLargestElement(nums)
    print("The second largest element is:", result)