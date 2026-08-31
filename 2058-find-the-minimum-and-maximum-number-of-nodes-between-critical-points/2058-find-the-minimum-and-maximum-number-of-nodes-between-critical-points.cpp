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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int pos=1;
        vector<int> index;
        ListNode* prev=head;
        ListNode* curr=head->next;
        while(curr->next!=nullptr){
            ListNode* next=curr->next;
            pos++;
            if((curr->val>prev->val && curr->val>next->val) || (curr->val<prev->val && curr->val<next->val)){
                index.push_back(pos);
            }
            prev=curr;
            curr=next;
        }
        if(index.size()<2)
        return {-1,-1};
        int maxDiff=index[index.size()-1]-index[0];
        int minDiff=INT_MAX;
        for(int i=1;i<index.size();i++){
            minDiff=min(minDiff,index[i]-index[i-1]);
        }
        return {minDiff,maxDiff};
    }
};