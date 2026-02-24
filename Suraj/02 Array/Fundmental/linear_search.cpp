#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        
        
        for(int i =0 ; i<nums.size();i++){
            if(nums[i]== target) {
                return i;
            }
        }
        return -1;

    }
    
};
int main() {
    Solution s;
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    int target = 5;
    cout<<s.linearSearch(nums, target);

    

    return 0;
}