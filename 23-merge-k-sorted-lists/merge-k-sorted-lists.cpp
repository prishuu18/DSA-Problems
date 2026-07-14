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

    ListNode* merge(ListNode* a, ListNode* b){

        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        while(a && b){

            if(a->val <= b->val){
                tail->next = a;
                a = a->next;
            }
            else{
                tail->next = b;
                b = b->next;
            }

            tail = tail->next;
        }

        if(a) tail->next = a;
        else tail->next = b;

        return dummy->next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if(lists.empty()) return NULL;

        ListNode* ans = lists[0];

        for(int i=1;i<lists.size();i++)
            ans = merge(ans, lists[i]);

        return ans;
    }
};



// brute
// class Solution {
// public:
//     ListNode* mergeKLists(vector<ListNode*>& lists) {

//         vector<int> arr;

//         for(auto head : lists){

//             while(head){
//                 arr.push_back(head->val);
//                 head = head->next;
//             }
//         }

//         sort(arr.begin(), arr.end());

//         ListNode* dummy = new ListNode(-1);
//         ListNode* curr = dummy;

//         for(int x : arr){
//             curr->next = new ListNode(x);
//             curr = curr->next;
//         }

//         return dummy->next;
//     }
// };