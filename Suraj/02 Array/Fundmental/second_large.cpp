#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return -1;
        int largest = INT_MIN;
        int second_large = INT_MIN;
        for(int i =0;i<n;i++){
            if(nums[i]>largest){
                second_large = largest;
                largest = nums[i];
            }else if(nums[i]>second_large && nums[i] != largest){
                second_large = nums[i];

            }
        }
       
      return second_large == INT_MIN ? -1: second_large;
    }
};
int main() {
    Solution s;
    vector<int> nums = {1,2,3,4,5};
    cout<<s.secondLargestElement(nums);

    return 0;
}