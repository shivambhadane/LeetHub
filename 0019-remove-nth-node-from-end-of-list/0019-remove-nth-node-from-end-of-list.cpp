/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // Step 1: Count the number of nodes
        int count = 0;
        ListNode* temp = head;

        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        // Step 2: If head needs to be removed
        if (count == n) {
            return head->next;
        }

        // Step 3: Find the previous node of the node to delete
        int index = count - n - 1;

        ListNode* temp1 = head;

        for (int i = 0; i < index; i++) {
            temp1 = temp1->next;
        }

        // Step 4: Delete the node
        temp1->next = temp1->next->next;

        return head;
    }
};