#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* partition(ListNode* head, int x) {
    ListNode less_head(0); // Dummy head for the list with values less than or equal to x
    ListNode greater_head(0); // Dummy head for the list with values greater than x
    ListNode* less_ptr = &less_head;
    ListNode* greater_ptr = &greater_head;

    while (head) {
        if (head->val <= x) {
            less_ptr->next = head;
            less_ptr = less_ptr->next;
        } else {
            greater_ptr->next = head;
            greater_ptr = greater_ptr->next;
        }
        head = head->next;
    }

    // Terminate both lists
    less_ptr->next = nullptr;
    greater_ptr->next = nullptr;

    // Connect the two lists
    less_ptr->next = greater_head.next;

    return less_head.next;
}

// Utility function to print the linked list
void printList(ListNode* head) {
    while (head) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

// Test the function
int main() {
    // Create a linked list
    ListNode* head = new ListNode(1);
    head->next = new ListNode(4);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(2);

    std::cout << "Original list: ";
    printList(head);

    int x = 3;
    ListNode* result = partition(head, x);

    std::cout << "Modified list after partitioning around " << x << ": ";
    printList(result);

    return 0;
}
