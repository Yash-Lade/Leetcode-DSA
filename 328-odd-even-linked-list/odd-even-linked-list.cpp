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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        vector<int> list;
        ListNode* temp = head;
        
        while(temp!=nullptr){
            list.push_back(temp->val);
            if(temp->next == nullptr) break;
            temp = temp->next->next;
        }
        temp = head->next;
         while(temp){
            list.push_back(temp->val);
            if(temp->next == nullptr) break;
            temp = temp->next->next;
        }
        temp = head;
        for(int i=0;i<list.size();i++){
            temp->val = list[i];
            temp = temp->next;
        }
        return head;
    }
};