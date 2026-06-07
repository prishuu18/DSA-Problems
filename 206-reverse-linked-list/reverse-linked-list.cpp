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
    ListNode* reverseList(ListNode* head) {
       ListNode* temp = head;
       ListNode* prev = NULL;
       while(temp!=NULL){
         ListNode* front = temp->next;
         temp->next = prev;
         prev = temp;
         temp = front;
       }
       return prev;   
        }
};
















// BRUTE 
//  ListNode* temp = head;
//         if(temp == NULL || temp->next == NULL){
//             return head;
//         }
//         while(temp!=NULL){
//             stack<int>st;
//             st.push(temp->val);
//             temp = temp->next;
//         }
//         stack<int>st;
//         ListNode* tempe = head;
//         while(tempe!=NULL){
//             tempe->val = st.top();
//             tempe= tempe->next;
//         }
//         return head;