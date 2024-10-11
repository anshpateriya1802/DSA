class Solution:
    def largestElement(self, nums):
        max=nums[0]
        for i in nums:
            if i>max:
                max=i

        return max
if __name__=="__main__":
    s=Solution()
    print(s.largestElement([1,2,3,4,5,6,7,8,11,9,10,8]))