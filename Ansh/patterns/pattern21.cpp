// ****
// *  *
// *  *
// ****


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        if (i==1 || i==n){
            for(int j=0;j<n;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            for(int x=0;x<n;x++){
                if(x==0 || x==n-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
}
