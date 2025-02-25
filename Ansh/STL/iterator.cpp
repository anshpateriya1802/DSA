#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v={1,2,3,4,5};
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);

    
    vector <int> :: iterator it= v.end();
    it--;
    // cout << *(it)<<endl;
    // cout<<v.back()<<endl;
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<endl;
    }
    // for(auto it:v){
    //     cout<<it<<endl;
    // }
    // cout<<v[0];
    return 0;
}