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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        
        unordered_set<int> st;

        for(auto num: nums){
            st.insert(num);
        }
        ListNode dummy(0);
        dummy.next = head;

        ListNode* temp = head;
        ListNode* prev = &dummy;

        while(temp){
            if(st.count(temp->val)){
                prev->next = temp->next;
            }
            else{
                prev = temp;
            }
            temp = temp->next;
        }

        return dummy.next;
    }
};