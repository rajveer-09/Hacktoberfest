//Reverse a Linked List
#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* current = head;

    while (current != nullptr) {
        ListNode* nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    return prev;
}

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size of the linked list: ";
    cin >> size;

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    cout << "Enter elements of the linked list: ";
    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;

        if (head == nullptr) {
            head = tail = new ListNode(value);
        } else {
            tail->next = new ListNode(value);
            tail = tail->next;
        }
    }

    cout << "Original Linked List: ";
    printList(head);

    // Reversing the linked list
    head = reverseList(head);

    cout << "Reversed Linked List: ";
    printList(head);

    return 0;
}
