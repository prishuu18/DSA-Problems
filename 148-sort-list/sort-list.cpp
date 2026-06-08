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
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        multiset<int> ms;
        while(temp!=NULL){
            ms.insert(temp->val);
            temp = temp->next;
        }
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        for(auto x: ms){
           tail->next =  new ListNode(x);
           tail = tail->next;
        }
        return dummy->next;
    }
};