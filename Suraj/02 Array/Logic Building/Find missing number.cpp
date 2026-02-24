#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        // range [0:n]
        int total = n*(n+1)/2;
        for(int val:nums){
            sum+=val;
        }
        int missingNum = total-sum;
        return missingNum;
        
    }
};
int main() {
    
    return 0;
}