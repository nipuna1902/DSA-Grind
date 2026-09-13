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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> s(nums.begin(),nums.end());
        ListNode* prev=nullptr;
        ListNode* temp=head;
        while(temp!=nullptr){
            if(s.count(temp->val)){
                if (prev==nullptr){
                    head=temp->next;
                    temp=head;
                }
                else{
                    prev->next=temp->next;
                    temp=temp->next;
                }
            }
            else{
                prev=temp;
                temp=temp->next;
            }
        }
        return head;
    }
};