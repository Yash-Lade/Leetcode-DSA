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
        vector<int> arr;
        // coverting list to array
        while(temp!=nullptr){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int n=arr.size();
        // Swap elements
        swap(arr[k-1], arr[n-k]);

        // again creating news list 
        ListNode* newhead = new ListNode(arr[0]);
        ListNode* ptr= newhead;
        temp= newhead;
        for(int i=1;i<arr.size();i++){
            ListNode* temp= new ListNode(arr[i]);
            ptr->next=temp;
            ptr=temp;
        }
        // returned head of new list
        return newhead;
    }
};