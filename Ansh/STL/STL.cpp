#include <iostream>
#include <stack>
#include <vector>
#include <set>
using namespace std;

int main()
{
    // vector <int> v={1,2,3,4,5};
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);

    
    // vector <int> :: iterator it= v.end();
    // it--;
    // cout << *(it)<<endl;
    // cout<<v.back()<<endl;
    // for(auto it=v.begin();it!=v.end();it++){
    //     cout<<*(it)<<endl;
    // }
    // for(auto it:v){
    //     cout<<it<<endl;
    // }
    // cout<<v[0];
    // stack<int> s1;
    // s1.push(1);
    // s1.push(2);
    // s1.push(3);
    // s1.push(4);
    // while (!s1.empty()) {
    //     cout << s1.top() << endl;
    //     s1.pop();
    // }
    set <int> st;
    // push_back does not work with set
    st.insert(5);
    st.insert(4);
    st.insert(3);
    st.insert(2);
    st.insert(6);
    
    auto it = st.find(3);
    for (int i:st){
        cout<<i<<endl;
    }
    cout<<*it;
    
    return 0;
}