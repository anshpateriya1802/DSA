class Solution:
    def bubbleSort(self, nums):
        n=len(nums)
        for i in range(n-1):
            for j in range(n-i-1):
                if(nums[j]>nums[j+1]):
                    nums[j],nums[j+1]=nums[j+1],nums[j]
        return nums

if __name__=="__main__":
    nums=[64, 25, 12, 22, 11]
    s=Solution()
    print(s.bubbleSort(nums))

    # by ANSH PATERIYA