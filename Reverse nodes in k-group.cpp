#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1)
            return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;

        int length = 0;
        while (curr) {
            length++;
            curr = curr->next;
        }

        while (length >= k) {
            curr = prev->next;
            for (int i = 1; i < k; i++) {
                ListNode* nextNode = curr->next;
                curr->next = nextNode->next;
                nextNode->next = prev->next;
                prev->next = nextNode;
            }
            prev = curr;
            length -= k;
        }

        return dummy->next;
    }
};

// Utility function to print the linked list
void printList(ListNode* node) {
    while (node) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    // Example usage
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original List: ";
    printList(head);

    Solution sol;
    int k = 2;
    ListNode* reversedHead = sol.reverseKGroup(head, k);

    cout << "Reversed List in groups of " << k << ": ";
    printList(reversedHead);

    return 0;
}

