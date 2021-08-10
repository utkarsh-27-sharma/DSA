class Solution {
public:
ListNode* middleNode(ListNode* head) {

    ListNode *temp=head;
     ListNode *temp1=head;
    
    int count=0;
    
    
    
    while(temp->next)
    {
        if(temp->next->next==NULL)
        {
            return temp1->next;
        }
        temp=temp->next->next;
        temp1=temp1->next;
        count++;
    }
              
   return temp1;     
}
};
// https://leetcode.com/problems/middle-of-the-linked-list/
