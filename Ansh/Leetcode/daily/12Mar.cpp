#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int maximumCount(vector<int>& nums) {
            int cnt=0, cntt=0;
            for (auto i : nums) {
                if (i < 0) {
                    cnt++;
                } else if (i > 0) {
                    cntt++;
                }
            }
            return max(cnt, cntt);
        }
};

int main() {
    Solution sol;
    vector<int> nums = {-1, -2, -3, 4, 5, 6};
    int result = sol.maximumCount(nums);
    cout << "Maximum count of positive or negative numbers: " << result << endl;
    return 0;
}