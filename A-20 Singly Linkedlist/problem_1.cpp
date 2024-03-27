// . You are given two non-empty linked lists representing two non-negative integers. The digits are stored in
// reverse order, and each of their nodes contains a single digit. Add the two numbers and store the sum in the
// first linked list.
#include <iostream>
using namespace std;

// Node class 
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

// Inserts node at the end of linkedlist
void insertEnd(node *head, int num)
{
    // Create new node with value num
    node *newNode = new node(num);
    newNode->next = NULL;
    // if head is initially  NULL
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // Reach to end and add new node at the end
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    return;
}

// Inserts node at the beginning of the LinkedList
void insertBeginning(node *head, int num)
{
    // Create new node with value  'num'
    node *newNode = new node(num);
    newNode->next = NULL;

    // if head is initially NULL
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // Insert at the beginning of the linkedlist
    newNode->next = head;
    head = newNode;
    return;
}

// Traverse and print linkedlist
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

// helper function 
void helper(node* head1, node* head2){
    // Declaring some pointer
    node* i  = head1;
    node* j = head2;

    while( i != NULL and j != NULL){
        i->val = i->val + j->val;
        i = i->next;
        j = j->next;     
    }

    while(j!=NULL ){
        insertEnd(head1, j->val);
        j = j->next;
    }

    return;
}

// Driver code 
int main()
{
    // Input taking
    node *head1 = new node(-1);
    node* head2 = new node(-1);
    int m,n;
    cout<<"Enter m : ";
    cin>>m;
    cout<<endl<<"Enter n : ";
    cin>>n;


    cout<<"Enter the nodes for First LinkedList : "<<endl;
    for (int i = 0; i < m; i++)
    {
        int num ;
        cin>>num;
        insertEnd(head1, num );
    }

    cout<<endl;
    cout<<"Enter the nodes for Second LinkedList : "<<endl;
    for (int i = 0; i < n; i++)
    {
        int num ;
        cin>>num;
        insertEnd(head2, num );
    }


    helper(head1->next, head2->next);

    cout<<endl<<"The final result is : "<<endl;
    print(head1->next);

    return 0;
}

/* We are frequently using head->next (head1->next ad head2->next) becouse heads initial value is -1*/