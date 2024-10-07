#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int j = i;
            while(j>0 && nums[j-1]>nums[j]){
                swap(nums[j-1],nums[j]);
                j--;

            }
        }
        return nums;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5,2,3,1};
    vector<int> ans = sol.insertionSort(nums);
    for(auto x: ans){
        cout<<x<<" ";
    } 
    return 0;
}