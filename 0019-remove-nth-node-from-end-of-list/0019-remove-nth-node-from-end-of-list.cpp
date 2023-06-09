class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
            ListNode* node=head;
            int c=0;
            while(node!=NULL)
            {
                    node=node->next;
                    c++;
            }
           cout<<c;
            if((c-n)==0)
            {
                    node=head;
                    head=head->next;
                    delete(node);
                 
            }
            else
            {
                    cout<<head->val;
                    node=head;
                    cout<<node->val;
                    for(int i=1;i<(c-n);i++)
                    {
                            node=node->next;
                    }
                    ListNode* temp=node;
                    temp=node->next;
                    node->next=temp->next;
                    delete(temp);
            }
            return head;
            
            
    }
};