#include <bits/stdc++.h>
using namespace std;
void mergesort(vector<int> &arr,int low ,int high){
    if(low<high){
        int mid = low + (high - low) / 2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
void merge(vector<int> &arr,int low ,int mid,int high){
    int left = low;
    int right = mid+1;
    vector<int> temp;
    while(left<=mid && right<=high){
        if(arr[left]<= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}
int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int n = arr.size();
    mergesort(arr, 0, n - 1);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}