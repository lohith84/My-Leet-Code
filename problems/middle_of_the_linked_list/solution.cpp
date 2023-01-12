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
    ListNode* middleNode(ListNode* head)
     {
        ListNode*m=head;
        ListNode*mm=head; 
        while(mm->next!=NULL)
        {
            m=m->next;
            mm=mm->next; 
            if(mm->next!=0)
            {
                mm=mm->next;
            }   
            
        }
        return m;
    }
};