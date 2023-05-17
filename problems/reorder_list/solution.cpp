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
    void reorderList(ListNode* head) {
        vector<int>v1;
        vector<int>v2;
        int n=0;
        ListNode *curr=head;
        while(curr!=NULL)
        {
            v1.push_back(curr->val);
            curr=curr->next;
            n++;
        }
        int n1=0;
        int n2=n-1;
        while(n1<n2)
        {
            v2.push_back(v1[n1]);
            n1++;
            v2.push_back(v1[n2]);
            n2--;
        }
        if(n%2)
        {
            int r=n/2;
            v2.push_back(v1[r]);
        }
        for(int i=0;i<v2.size();i++)
        {
            head->val=v2[i];
            head=head->next;
        }
        
    }
};