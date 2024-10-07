class Solution {
public:
    void mergeSortHelper(vector<int> &nums, int low ,int high){
       // base case  if one element
       if(low>=high) return ;
       int mid = low + (high - low) / 2;
       mergeSortHelper(nums,low,mid);
       mergeSortHelper(nums,mid+1,high);
       merge(nums,low,mid,high);

    }

    void merge(vector<int> &nums,int low ,int mid,int high){
        // pointer on both
        int left = low;
        int right = mid+1;
        vector<int> temp ;
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]) {
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }}
            // remaining element
        while(left<=mid){
                temp.push_back(nums[left]);
                left++;
            }

        while(right<=high){
                temp.push_back(nums[right]);
                right++;
            }
            // tranfering;
        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
            }
    }
    vector<int> mergeSort(vector<int>& nums) {
        int n = nums.size();
        mergeSortHelper(nums,0,n-1);
        return nums;
    }
};
