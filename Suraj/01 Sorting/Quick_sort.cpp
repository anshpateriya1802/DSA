#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int partitionIndex(vector<int> &nums,int low ,int high){
        int i = low;
        int j = high;
        int pivot = nums[low];
        while(i<j){
            while(nums[i] <= pivot && i<high) i++;
            while(nums[j]>pivot && j>low) j--;
            if(i<j)swap(nums[i],nums[j]);

        }
        swap(nums[low],nums[j]);
        return j;
    }
    void qs(vector<int> &nums,int low ,int high){
        if(low<high){
            int pIndex = partitionIndex(nums,low,high);
            qs(nums,low,pIndex-1);
            qs(nums,pIndex+1,high);
        }
    }
    vector<int> quickSort(vector<int>& nums) {
        int n = nums.size();
        qs(nums,0,n-1);
        return nums;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    vector<int> res = sol.quickSort(nums);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}