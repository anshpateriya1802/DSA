#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v={1,2,3,4,5};
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);

    
    vector <int> :: iterator it=v.begin();
    cout << *(it)<<endl;
    return 0;
}