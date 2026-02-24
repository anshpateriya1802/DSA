class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int s=1;
            vector<int>ans;
            for (int i=0;i<nums.size();i++){
                for(int j=0;j<nums.size();j++){
                    if(i!=j){
                        s=s*nums[j];
                    }
                    else{
                        continue;
                    }
    
                }
                ans.push_back(s);
                s=1;
            }
            return ans;
            
        }
    };