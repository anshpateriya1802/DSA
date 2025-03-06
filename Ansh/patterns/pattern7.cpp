//         *
//        ***
//       *****
//      *******
//     *********
//    ***********
//   *************
//  ***************
// *****************

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
    int n,count=1;
    cin>>n;
    
    for(int i=n;i>0;i--){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int x=0;x<count;x++){
            cout<<"*";
        }
        cout<<endl;
        count+=2;
    }
}