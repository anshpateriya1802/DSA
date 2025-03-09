#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1,Node* next1,Node* prev1){
        data=data1;
        next=next1;
        prev=prev1;

    }
    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }


};

Node *convert2DLL(vector<int> &arr)
{
    if (arr.empty())
        return nullptr;
    Node *head = new Node(arr[0]);

    Node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        prev->next = new Node(arr[i], nullptr, prev);

        prev = prev->next;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* reverse1(Node* head){
    if(!head) return nullptr;
    Node* temp=head;
    stack<int>a;
    while(temp){
        a.push(temp->data);
        temp=temp->next;
    }
    temp=head;

    while(temp){
        temp->data=a.top();
        a.pop();
        temp=temp->next;
    }
    return head;
    
}

Node* reverse2(Node* head){
    Node* current=head;
    Node* back=NULL;

    while(current){
        back=current->prev;
        current->prev=current->next;
        current->next=back;
        current=current->prev;
    }
    return back->prev;
}

int main() {
    vector<int> arr = {12, 8, 3, 4};
    Node *head = convert2DLL(arr);
    head=reverse2(head);

    print(head);


    return 0;
}