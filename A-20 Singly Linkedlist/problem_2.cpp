#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* deleteDuplicates(ListNode* head) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* prev = dummy;
    ListNode* current = head;

    while (current) {
        // Check for duplicates
        while (current->next && current->val == current->next->val) {
            current = current->next;
        }

        // If no duplicates, move pointers
        if (prev->next == current) {
            prev = prev->next;
        } else {
            prev->next = current->next;
        }

        current = current->next;
    }

    return dummy->next;
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
    // Create a sorted linked list with duplicates
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);

    std::cout << "Original list: ";
    printList(head);

    // Delete duplicates and print the modified list
    ListNode* result = deleteDuplicates(head);
    std::cout << "Modified list: ";
    printList(result);

    return 0;
}
