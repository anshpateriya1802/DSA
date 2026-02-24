#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int data1, Node *next1, Node *prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }
    Node(int data1)
    {
        data = data1;
        next = NULL;
        prev = NULL;
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

int lengthOfDLL(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int search(Node *head, int k)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == k)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

Node *insertAtHead(Node *head, int k)
{

    Node *newHead = new Node(k, head, nullptr);
    head->prev = newHead;
    return newHead;
}

Node *insertAtTail(Node *head, int k)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new Node(k, nullptr, temp);
    return head;
}

Node *insertAtPos(Node *head, int pos, int value)
{

    int count = 0;
    Node *temp = head;

    if (pos == 1)
    {
        Node *check = new Node(value, temp, nullptr);
        temp->prev = check;
        return check;
    }

    while (temp)
    {
        count++;
        if (count == pos)
        {
            Node *check = new Node(value, temp, temp->prev);

            temp->prev->next = check;
            temp->prev = check;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node *insertBeforeEle(Node *head, int ele, int value)
{

    if (head->data == ele)
    {
        return insertAtHead(head, value);
    }
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == ele)
        {
            break;
        }
        temp = temp->next;
    }
    Node *check = new Node(value, temp, temp->prev);
    temp->prev->next = check;
    temp->prev = check;

    return head;
}

Node *deleteHead(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return nullptr;
    }
    Node *temp = head;
    Node *check = temp->next;
    temp->next->prev = nullptr;
    temp->next = nullptr;

    free(temp);
    return check;
}

Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return nullptr;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->next == NULL)
        {
            break;
        }
        temp = temp->next;
    }
    temp->prev->next = NULL;
    temp->prev = NULL;
    free(temp);
    return head;
}

Node *deleteAtK(Node *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (k == 1)
    {
        return deleteHead(head);
    }
    Node *temp = head;
    int cnt = 0;
    while (temp != nullptr)
    {
        cnt++;
        if (cnt == k)
        {
            break;
        }
        temp = temp->next;
        
    }
    if(temp->next==NULL){
        temp->prev->next=NULL;
        temp->prev=NULL;
        free(temp);
        return head;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    temp->next = nullptr;
    temp->prev = nullptr;
    free(temp);
    return head;
}

Node* deleteEle(Node* head,int ele){
    if (head == NULL)
    {
        return NULL;
    }
    
    Node *temp = head;
    
    while (temp != nullptr)
    {
       
        if (temp->data == ele)
        {
            if(temp->prev==NULL){
                return deleteHead(head);
            }
            
            else if(temp->next==nullptr){
                return deleteTail(head);
            }
            else {
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
                temp->next=NULL;
                temp->prev=NULL;
                free(temp);
                return head;
            }
            break;
        }
        temp = temp->next;
        
    }
    

    return head;
}

int main()
{
    vector<int> arr = {12, 8, 3, 4};
    Node *head = convert2DLL(arr);

    // cout<<lengthOfDLL(head);
    // cout<<search(head,20);
    // head=insertAtHead(head,14);
    // head=insertAtTail(head,24);
    // head=insertAtPos(head,5,10);
    // head=insertBeforeEle(head,4,10);
    // head=deleteHead(head);
    // head=deleteTail(head);
    head = deleteEle(head, 4);

    print(head);
    // cout<<head->data;

    return 0;
}