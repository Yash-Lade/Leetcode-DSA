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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* start = head;
        ListNode* end = head;
        int cnt = 0;
        // move start to the front target
        while(temp!=NULL){
            cnt++;
            if(cnt == k)
            start = temp;
            temp = temp-> next;
        }
        // move end to last target
        for(int i=1 ; i<cnt-k+1 ; i++)
        end = end->next;
        
        // just swap the values
        int val = start->val;
        start->val = end->val;
        end->val = val;

        return head;
    }
};