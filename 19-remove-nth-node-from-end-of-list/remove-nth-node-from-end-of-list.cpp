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
        ListNode* fast = head;
        ListNode* slow = head;
        for(int i=0; i<n; i++){
            fast = fast->next;
        }
        if(fast == NULL){
            return head->next;
        }
        while(fast->next!= NULL){
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* delNode = slow->next;
        slow->next = slow->next->next;
        delete delNode;
        return head;
    }
};













// BRUTE FORCE APPROACH
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* temp =head;
//         int count= 0;
//         while(temp!=NULL){
//             count++;
//             temp = temp->next;
//         }
//         return count;
//         if(count == N){
//             ListNode* newHead = head->next;
//             return newHead;
//         }
//         int result = count - n;
//         ListNode* temp = head;
//         while(temp!=NULL){
//             result--;
//             if(result == 0){
//                 break;
//             }
//             temp = temp->next;
//         }
//         ListNode* delNode = temp->next;
//         delete(delNode);
//         temp = temp->next->next;
//         return head;
//     }
// };