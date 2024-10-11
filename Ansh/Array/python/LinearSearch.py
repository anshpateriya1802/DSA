class Solution:
    def linearSearch(self, nums, target):
        if target not in nums:
            return -1
        else:
            for i in range(len(nums)):
                if nums[i]==target:
                    return i
        
            
if __name__=="__main__":
    s=Solution()
    print(s.linearSearch([1,2,3,4,5,6],6))
    
