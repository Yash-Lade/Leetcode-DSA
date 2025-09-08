/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        unordered_map<ListNode*, int> mpp;

        while(tempA){
            mpp[tempA] = 1;
            tempA = tempA->next;
        }
        while(tempB){
            if(mpp.find(tempB)!=mpp.end())
            return tempB;

            mpp[tempB] = 1;
            tempB = tempB->next;
        }
        return nullptr;
    }
};