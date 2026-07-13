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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == NULL || left == right)
            return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;
        int c = 1;
        while (c < left) {
            prev = curr;
            curr = curr->next;
            c++;
        }
        ListNode* beforeLeft = prev;
        ListNode* leftNode = curr;
        ListNode* next = NULL;
        prev = NULL;
        while (c <= right) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            c++;
        }
        beforeLeft->next = prev;
        leftNode->next = curr;
        return dummy->next;
    }
};