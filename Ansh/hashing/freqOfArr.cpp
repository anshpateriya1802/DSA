#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> frequencyCount(vector<int>& arr) {
        int n = arr.size();
        vector<int> freq(n, 0);  // Initialize frequency vector of size N with 0

        // Count elements only in the range [1, N]
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 1 && arr[i] <= n) {
                freq[arr[i] - 1]++;  // Adjust index to 0-based
            }
        }

        return freq;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {2, 3, 2, 3, 5};  // Example input
    vector<int> result = sol.frequencyCount(arr);

    // Print the result
    for (int count : result) {
        cout << count << " ";
    }
    cout << endl;

    return 0;
}