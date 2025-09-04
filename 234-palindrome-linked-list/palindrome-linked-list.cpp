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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        // find middle (slow stops at mid for odd, at left-mid for even)
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // reverse second half
        ListNode* secondHead = reverseList(slow);
        ListNode* first = head;
        ListNode* second = secondHead;

        bool isPalin = true;
        while (second) {
            if (first->val != second->val) {
                isPalin = false;
                break;
            }
            first = first->next;
            second = second->next;
        }

        // restore list
        reverseList(secondHead);
        return isPalin;
    }
};