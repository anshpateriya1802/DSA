#include <bits/stdc++.h>
using namespace std;
/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    vector<int> LLTraversal(ListNode *head) {
        vector<int> arr;
        while(head !=nullptr){
            arr.push_back(head->val);
            head = head->next;
        }
        return arr;
    }
};
int main() {
    
    return 0;
}