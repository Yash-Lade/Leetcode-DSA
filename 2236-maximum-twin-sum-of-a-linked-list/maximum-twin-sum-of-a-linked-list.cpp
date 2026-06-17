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
    int pairSum(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head;
        // traverse the half list
        while(fast != nullptr && fast->next != nullptr){
            slow= slow->next;
            fast = fast->next->next;
        }

        // reverse list 
        ListNode* prev = nullptr;
        ListNode* temp = slow;

        while(temp != nullptr){
            ListNode* nextTemp = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nextTemp;
        }
        ListNode* first = head; // first list head
        ListNode* second = prev; // second list head

        int maxSum = 0;
        while(second != nullptr ){
            int currSum = first->val + second->val;
            if(maxSum < currSum) maxSum = currSum;

            first = first->next;
            second = second->next;
        }

        return maxSum;
    }
};