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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL && list2 == NULL) return NULL;
        if(list1 == NULL && list2 != NULL) return list2;
        if(list2 == NULL && list1 != NULL) return list1;
        ListNode* ptr = list1;

        vector<int> arr;
        while(ptr){
            arr.push_back(ptr->val);
            ptr = ptr->next;
        }
        ptr = list2;
        while(ptr){
            arr.push_back(ptr->val);
            ptr = ptr->next;
        }
        sort(arr.begin(), arr.end());

        ListNode* newList = new ListNode(0);
        ListNode* newHead = newList;
        ListNode* newPtr = newHead;
        int i=0;
        while(i<arr.size()){
            ListNode* ans = new ListNode(arr[i]);
            newPtr -> next = ans;
            newPtr = newPtr->next;
            i++;
        }
        return newHead->next;;
    }
};