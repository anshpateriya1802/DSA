#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    Node(int data , Node* next){
        this->data = data;
        this->next = next;
    }
};

void printLinkedList(Node* head){
    Node* temp = head ;
    while (temp->next != nullptr)  
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}


Node*arrayToLinkedList(int arr[],int size){
    if (size == 0) return nullptr;
    Node* head = new Node(arr[0]);
    Node* current = head ;

    for (int i = 1; i <= size; i++)
    {
        current->next = new Node(arr[i]);
        current = current->next;
    }
    return head;
}

int lengthOfLinkedList(Node* head){
    Node* temp = head;
    int size = 0;
    
    while (temp->next != nullptr){
        size++;
        temp = temp->next;
    }
    return size;
}



int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    Node* head = arrayToLinkedList(arr, size);

    // Print the linked list
    printLinkedList(head);
    int length = lengthOfLinkedList(head);
    cout << "Length of the linked list: " << length << endl;
    
    return 0;
}