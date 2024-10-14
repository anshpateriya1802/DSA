#include <bits/stdc++.h>
using namespace std;

// Node structure
struct ListNode {
    int val;
    ListNode *next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int data1): val(data1), next(nullptr) {}
    ListNode(int data1, ListNode *next1): val(data1), next(next1) {}
};

class Solution {
public:
    // Function to delete the k-th node of a linked list
    ListNode* deleteKthNode(ListNode* head, int k) {
        // If the list is empty, return NULL
        if (head == NULL)
            return NULL;
        
        // If k is 1, delete the head node
        if (k == 1) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        
        // Initialize a temporary pointer
        ListNode* temp = head;
        
        // Traverse to the (k-1)th node
        for (int i = 0; temp != NULL && i < k - 2; i++) {
            temp = temp->next;
        }
        
        /*If k is greater than the number of nodes, 
        return the unchanged list*/
        if (temp == NULL || temp->next == NULL)
            return head;
        
        // Delete the k-th node
        ListNode* next = temp->next->next;
        delete temp->next;
        temp->next = next;
        
        // Return head
        return head;
    }
};

// Function to print the linked list
void printLL(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // Initialize a vector with values for the linked list
    vector<int> arr = {12, 5, 8, 7};
    
    // Create a linked list with the values from the vector
    ListNode* head = new ListNode(arr[0]);
    head->next = new ListNode(arr[1]);
    head->next->next = new ListNode(arr[2]);
    head->next->next->next = new ListNode(arr[3]);
    
    // Print the original linked list
    cout << "Original list: ";
    printLL(head);
    
    // Creating an instance of Solution class
    Solution sol;
    
    // Call the deleteKthNode function to delete the k-th node
    int k = 2;
    head = sol.deleteKthNode(head, k);
    
    // Print the linked list after deletion
    cout << "List after deleting the kth node: ";
    printLL(head);

    return 0;
}