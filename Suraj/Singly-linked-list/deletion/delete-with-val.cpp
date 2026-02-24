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
    ListNode* deleteNodeWithValueX(ListNode* &head, int X) {
        
         if (head == NULL)
            return head;
        if(head-> val == X){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        ListNode* temp = head ;
        ListNode* prev = NULL;

        while(temp!=NULL){
            if(temp->val == X){
                prev->next = temp->next;
                delete temp;
                return head;
            }
            prev = temp;
            temp = temp->next;
        }
        return head;
        



    }
};