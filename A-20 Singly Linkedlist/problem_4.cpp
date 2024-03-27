// Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of
// the list from position left to position right, and return the reversed list.

// The first line of input contains n, the size of the linked list.

#include <iostream>
using namespace std;

class node
{
public:
    int val;
    node *next;

    node(int data)
    {
        this->val = data;
        this->next = NULL;
    }
};

void insertEnd(node *head, int num)
{
    node *newNode = new node(num);
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    node *temp = head;

    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return;
}

void print(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return;
}
node *reverse(node *head)
{
    node *prev = NULL;
    node *curr = head;
    node *next = NULL;
    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

node *helper(node *head, int left, int right)
{

    node *ptr = head;

    for (int i = 1; i < left; i++)
    {
        ptr = ptr->next;
    }

    node *revhead = ptr;
    node *temp = revhead;


    for (int i = left; i < right; i++)
    {
        temp = temp->next;
    }
    temp->next = NULL;


    node* newRevHead = reverse(revhead);

    ptr = newRevHead;


    
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    node *head = new node(-1);

    cout << "Enter the elements of the linkedlist : " << endl;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        insertEnd(head, num);
    }

    int left, right;
    cout << "Enter the valueof left : ";
    cin >> left;
    cout << "Enter value of right : ";
    cin >> right;

    cout << endl
         << endl;
    print(reverse(head->next));
}