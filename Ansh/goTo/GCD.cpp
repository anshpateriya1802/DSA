#include<bits/stdc++.h>
#include <vector>
#include<algorithm>
class Solution {
    public:
        int findGCD(vector<int>& nums) {
            
            // int ma=*max_element(nums.begin(),nums.end());
            // int mi=*min_element(nums.begin(),nums.end());
            
            // if (ma%mi==0){
            //     return mi;
            // }
            // else{
            //     for (int i=mi;i>0;i--){
            //         if(ma%i==0 && mi%i==0){
            //             return i;
            //             break;
            //         }
                    
            //     }
            //     return 1;
            // }




            // method 2

            int m=*max_element(nums.begin(),nums.end());
            int n=*min_element(nums.begin(),nums.end());
    
            return gcd(m,n);//use <numeric> to use gcd
    
        }
    };