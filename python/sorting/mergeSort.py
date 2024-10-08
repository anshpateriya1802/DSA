class Solution:
    def mergeSort(self, nums):
        self.ms(nums,0,len(nums)-1)
        return nums

    def ms(self,nums,low,high):
        mid=(low+high)//2
        if(low>=high): return
        self.ms(nums,low,mid)
        self.ms(nums,mid+1,high)
        self.merge(nums,low,mid,high)
    
    def merge(self,nums,low,mid,high):
        temp=[]
        left=low
        right=mid+1
        while left<=mid and right<=high:
            if nums[left]<=nums[right]:
                temp.append(nums[left])
                left+=1
            else:
                temp.append(nums[right])
                right+=1
        while left<=mid:
            temp.append(nums[left])
            left+=1
        while right<=high:
            temp.append(nums[right])
            right+=1
        
        for i in range(low,high+1):
            nums[i]=temp[i-low]
        
if __name__=="__main__":
    nums=[64, 25, 12, 22, 11]
    s=Solution()
    print(s.mergeSort(nums))
    # by ANSH PATERIYA