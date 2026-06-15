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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr)
            return head;

        ListNode* newHead = new ListNode(head->val);
        ListNode* tail = newHead;
        ListNode* curr = head->next;

        while (curr != nullptr) {
            if (tail->val != curr->val) {
                tail->next = new ListNode(curr->val);
                tail = tail->next;
            }

            curr = curr->next;
        }

        return newHead;
    }
};