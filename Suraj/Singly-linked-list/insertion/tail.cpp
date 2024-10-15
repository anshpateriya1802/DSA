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
    ListNode* insertAtTail(ListNode* &head, int X) {
        if(head==NULL) return new ListNode(X);
        ListNode* tail = new ListNode(X);
        ListNode* temp = head ;
        while(temp->next !=NULL){
            temp = temp->next;

        }
        temp->next = tail;
        tail->next = NULL;
        return head;

    }
};