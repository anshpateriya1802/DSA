#include <bits/stdc++.h>
using namespace std;
class solution {
    public:
    vector<int> mergeSort(vector<int>& nums) {
        int n = nums.size();
        if(n<=1) return nums;
        vector<int> left;   // left part of the array
        vector<int> right;  // right part of the array
        for(int i=0;i<n/2;i++){
            left.push_back(nums[i]);
        }
        for(int i=n/2;i<n;i++){
            right.push_back(nums[i]);
        }
        left = mergeSort(left);
        right = mergeSort(right);
        return merge(left,right);
    }
    vector<int> merge(vector<int>& left, vector<int>& right){
        vector<int> ans;
        int i=0;
        int j=0;
        while(i<left.size() && j<right.size()){
            if(left[i]<right[j]){
                ans.push_back(left[i]);
                i++;
            }
            else{
                ans.push_back(right[j]);
                j++;
            }
        }
        while(i<left.size()){
            ans.push_back(left[i]);
            i++;
        }
        while(j<right.size()){
            ans.push_back(right[j]);
            j++;
        }
        return ans;
    }

};
int main() {
    // merge sort
    solution sol;
    vector<int> nums = {5,2,3,1};
    vector<int> ans = sol.mergeSort(nums);
    for(auto x: ans){
        cout<<x<<" ";
    }


    return 0;
}