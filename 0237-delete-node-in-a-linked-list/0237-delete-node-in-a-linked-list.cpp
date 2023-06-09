/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
            // ListNode* del=node;
            // ListNode* n1=node->next;
            ListNode* p=node;
            ListNode* prev=node;
            
            while(p->next!=NULL)
            {
                   prev=p;
                    p->val=p->next->val;
                    p=p->next;
                 
            }
            prev->next=NULL;
            
            // node->val=NULL;
//             node->val=node->next->val;
//             node->next=node->next->next;
            
            
    }
};