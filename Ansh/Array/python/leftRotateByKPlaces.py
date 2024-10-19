class Solution:
    def rotateArray(self, nums, k):
        n = len(nums) 
        k = k % n  

        temp = []

        for i in range(k):
            temp.append(nums[i])

        for i in range(k, n):
            nums[i - k] = nums[i]

        for i in range(k):
            nums[n - k + i] = temp[i]


def printArray(nums):
    for val in nums:
        print(val, end=" ")
    print()


if __name__ == "__main__":
    nums = [1, 2, 3, 4, 5, 6]
    k = 8

    print("Initial array: ")
    printArray(nums)

    sol = Solution()

    sol.rotateArray(nums, k)

    print(f"Array after rotating elements by {k} places: ")
    printArray(nums)