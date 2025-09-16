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
        
        if(head == nullptr || head->next == NULL) return head;
        ListNode* temp = head;
        ListNode* front = temp->next;

        while(temp && front){
            if(temp->val == front->val){
                temp->next = front->next;
                front = temp->next;
            }
            else{
                temp = temp->next;
                front = temp->next;
            }
        }
        return head;
    }
};