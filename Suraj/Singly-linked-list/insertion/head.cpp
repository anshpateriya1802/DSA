/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
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
    ListNode* insertAtHead(ListNode* &head, int X) {
        // ListNode* temp = head;
        ListNode* newhead = new ListNode(X);
        newhead->next = head;
        head = newhead;

    return head;
    }
};
