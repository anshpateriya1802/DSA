// Online C++ compiler to run C++ program online
#include <vector>
#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    vector<int> a={1,2,3,4,4,5,5,5,6,6,6,7,8,9};
    // bool ans=binary_search(a.begin(),a.end(),3);
    // cout<<ans;
    int x=lower_bound(a.begin(),a.end(),9)-a.begin();
    cout<<x<<endl;
    int y=upper_bound(a.begin(),a.end(),5)-a.begin();
    cout<<y;
    return 0;
}