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
    ListNode* reverseLinkedList(ListNode* head){
        ListNode * temp = head;
        ListNode * prev = NULL;

        while(temp){
            ListNode* front = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }

    ListNode* getKthNode(ListNode* temp, int k){    
        k = k-1;
        while(temp != NULL && k > 0){
            k--;
            temp = temp->next;
        }
        return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* temp = head;
        ListNode* prevLast = NULL;

        while(temp != NULL){

            ListNode* kThNode = getKthNode(temp, k);

             if(kThNode == NULL)
            {
                // if the list size is smaller than K i.e. getKthNode returned NULL
                if(prevLast) prevLast->next = temp;
                break;
            }
            // kth node aane ke baad next node banayege taki null ke aage pehle he pointer rakh de
            ListNode* nextNode = kThNode -> next;
            kThNode -> next = NULL;

            reverseLinkedList(temp);

            // For the first group temp==head 
            if(temp == head){
                head = kThNode; // as head is now reverse and should point the first node and after reversal 
                // the first node is now the Kth node.
            }
            else
            prevLast -> next = kThNode; // agar wo first group nhi hai toh uska first element Kth node hoga
            // jise prevLast node (pichle group ka last node) point karega

            prevLast = temp;
            temp = nextNode;
        }

        return head;
    }
};