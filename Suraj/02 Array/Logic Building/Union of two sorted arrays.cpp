#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        for(int val:nums1){
            s.insert(val);
        }
        for(int val:nums2){
            s.insert(val);
        }
        vector<int> unionArray;
         for(int val : s) {
            unionArray.push_back(val);
        }
        return unionArray;


    }
};
int main() {
    
    return 0;
}