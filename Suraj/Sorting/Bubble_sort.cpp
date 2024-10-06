#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
    return nums;
    }
};

int main() {
    // Create an instance of solution 
    Solution solution;
    
    vector<int> nums = {7, 4, 1, 5, 3};
    
    cout << "Before Using Bubble Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Function call for Bubble Sort
    nums = solution.bubbleSort(nums);

    cout << "Array After Using Bubble Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
