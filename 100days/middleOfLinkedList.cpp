/*Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.
*/
//leetcode 876
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        int count=0;
        ListNode* temp=head;
        while(temp->next != NULL){
            count++;
            temp=temp->next;
        }
        int i=0;
        if(count%2==0){
            for(i=0;i<count/2;i++){
                head=head->next;
             }
            
        }
        else{
            for(i=0;i<count/2;i++){
                head=head->next;
            }
            head=head->next;
        }
        
        
        
        
        return head;
    }
};