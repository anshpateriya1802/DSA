class Solution:
    def quickSort(self, nums):
        self.qs(nums,0,len(nums)-1)
        return nums
    
    def qs(self,nums,low,high):
        if(low<high):
            pIndex=self.partition(nums,low,high)
            self.qs(nums,low,pIndex-1)
            self.qs(nums,pIndex+1,high)
    
    def partition(self,nums,low,high):
        i=low
        j=high
        pivot=nums[low]
        while(i<j):
            while(nums[i]<=pivot and i<=high-1):
                i+=1
            
            while(nums[j]>pivot and j>=low+1):
                j-=1
            
            if(i<j):
                nums[i],nums[j]=nums[j],nums[i]
        nums[low],nums[j]=nums[j],nums[low]
        return j
    
if __name__=="__main__":
    nums=[64, 25, 12, 22, 11]
    s=Solution()
    print(s.quickSort(nums))
    # by ANSH PATERIYA