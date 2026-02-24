#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int val:nums){
            s.insert(val);
        }
        int k = s.size();
        int j = 0;
        for(int val :s){
            nums[j++] = val;
        }
        return k;
    }
};
int main() {
    
    return 0;
}