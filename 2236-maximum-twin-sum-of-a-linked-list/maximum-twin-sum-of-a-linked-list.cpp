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
        
        vector<int> arr1;
        vector<int> arr2;

        while(fast != nullptr && fast->next != nullptr){
            arr1.push_back(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }

        while(slow != nullptr){
            arr2.push_back(slow->val);
            slow = slow->next;
        }

        reverse(arr2.begin(), arr2.end());
        int maxSum = 0;

        for(int i = 0; i<arr1.size(); i++)
        {   
            int currSum =  arr1[i] + arr2[i];
            if(maxSum < currSum) 
            maxSum = currSum;
        }
        return maxSum;
    }
};