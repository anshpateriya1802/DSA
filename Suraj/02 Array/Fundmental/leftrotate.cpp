#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int n = nums.size();
        int first = nums[0];
        
        for(int i=1;i<n;i++){
            nums[i-1] = nums[i];
        }
        nums[n-1]=first;
        
    }
};
class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int n = nums.size();
        int first = nums[0];
        vector<int> res ;
        for(int i=1;i<n;i++){
            res.push_back(nums[i]);        
        }
        res.push_back(first);
        for (int i = 0; i < n; i++) {
            nums[i] = res[i];
        }
        
    }
};
int main() {
    
    return 0;
}