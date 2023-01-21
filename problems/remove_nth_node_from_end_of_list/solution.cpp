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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         ListNode* tempp=new ListNode();
         int i;
         tempp->next=head;
         ListNode*a=tempp;
         ListNode*b=tempp;
         for(i=1;i<=n;i++)
         {
             a=a->next;
         }
         while(a->next!=0)
         {
             a=a->next;
             b=b->next;
         }
         ListNode*c=b->next;
         b->next=b->next->next;
         delete(c);
         return tempp->next;
    }
};