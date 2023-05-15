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
        ListNode* curr=head;
        ListNode* temp=head;
        int n,a,i;
        vector<int>v;
        while(curr!=NULL)
        {
            a=curr->val;
            v.push_back(a);
            curr=curr->next;
        }
        n=v.size();
        swap(v[k-1],v[n-k]);
        for(i=0;i<n;i++)
        {
            head->val=v[i];
            head=head->next;
        }
        return temp;
    }
};