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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL or head->next==NULL)
        {
            return head;
        }
        ListNode* curr=head;
        ListNode* pres=head;
        ListNode* store;
        int n=1;
        while(curr->next!=NULL)
        {
            curr=curr->next;
            n++;
        }
        curr->next=pres;
        k=k%n;
        for(int i=0;i<n-k-1;i++)
        {
            pres=pres->next;
        }
        store=pres->next;
        pres->next=NULL;
        return store;
    }
};