class Solution:
    def insertionSort(self, nums):
        n=len(nums)
        for i in range(n):
            for j in range(i,0,-1):
                if(nums[j]<nums[j-1]):
                    nums[j],nums[j-1]=nums[j-1],nums[j]
        return nums
if __name__=="__main__":
    nums=[64, 25, 12, 22, 11]
    s=Solution()
    print(s.insertionSort(nums))
    # by ANSH PATERIYA
    