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
        if(head == NULL || head->next == NULL) return nullptr;
        ListNode* temp = head;
        int totalNodes = 0;
        while(temp){
            totalNodes++;
            temp = temp->next;
        }
        // If we need to remove the head
        if (n == totalNodes) {
            ListNode* newHead = head->next;
            delete head; // free memory
            return newHead;
        }
        int replace = totalNodes-n-1;
        temp=head;
 
        while(replace--){
            temp = temp->next;
        }
        
        ListNode* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;

        return head;
    }
};