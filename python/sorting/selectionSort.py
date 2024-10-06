class Solution:

    def selectionSort(self, nums):
        for i in range(len(nums)-1):
            min=i
            for j in range(i+1,len(nums)):
                if(nums[j]<nums[min]):
                    min=j
                else:
                    continue
            if(min!=i):
                nums[i],nums[min]=nums[min],nums[i]
        return nums
            
if __name__=="__main__":
    nums=[64, 25, 12, 22, 11]
    s=Solution()
    print(s.selectionSort(nums))

    # by ANSH PATERIYA