// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=n;i>=0;i--){
        for (int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}