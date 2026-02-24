#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int numberOfAlternatingGroups(vector<int>& colors, int k) {
            int ans=0,left=0;
            int n=colors.size();
            for(int right=1;right<n+k-1;right++){
                if(colors[right%n]==colors[(right-1)%n]){
                    left=right;
                }
                if(right-left+1==k){
                    ans++;
                    left++;
                }
            }
            return ans;
            
        }
    };


    int main() {
        Solution sol;
        vector<int> colors = {1, 2, 1, 2, 1};
        int k = 3;
        int result = sol.numberOfAlternatingGroups(colors, k);
        cout << "Number of alternating groups: " << result << endl;
        return 0;
    }