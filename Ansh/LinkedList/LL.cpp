#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *array2ll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthOfLL(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp)
    {
        count++;
        cout << temp->data << " ";

        temp = temp->next;
    }
    return count;
}

int search(Node *head, int el)
{
    Node *temp = head;

    while (temp)
    {
        if (temp->data == el)
        {
            return 1;
        }

        temp = temp->next;
    }
    return 0;
}
Node *insertHead(int data, Node *head)
{
    return new Node(data, head);
}

Node *insertTail(int data, Node *head)
{
    if (head == NULL)
    {
        return new Node(data);
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *check = new Node(data);
    temp->next = check;

    return head;
}

Node *insertPosition(Node *head, int pos, int ele)
{
    if (head == NULL)
    {
        return new Node(ele);
    }

    Node *temp = head;
    int count = 0;
    Node *prev = NULL;
    while (temp != nullptr)
    {
        count++;
        if (count == pos)
        {
            Node *check = new Node(ele, prev->next);
            prev->next = check;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *deleteHead(Node *head)
{
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;

    return head;
}

Node *deletePosition(Node *head, int k)
{
    if (head == NULL)
    {
        return head;
    }
    if (k == 1)
    {
        Node *check = head;
        head = head->next;
        return head;
    }
    Node *temp = head;
    int count = 0;
    Node *prev = NULL;
    while (temp != nullptr)
    {
        count++;
        if (count == k)
        {
            prev->next = prev->next->next;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {12, 8, 3, 4};
    Node *head = array2ll(arr);
    // head=insertHead(19,head);
    // head=deleteHead(head);
    // head=insertTail(20,head);
    // head=deleteTail(head);
    head = insertPosition(head, 2, 11);

    cout << lengthOfLL(head);
    // cout<<search(head,19);

    return 0;
}