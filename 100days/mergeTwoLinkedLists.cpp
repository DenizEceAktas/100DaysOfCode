/*You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

*/

//leetcode 21
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* result= new ListNode();
        ListNode* temp=result;
        while(list1!=NULL && list2!=NULL){
            if(list1->val <= list2-> val){
                temp->next=new ListNode(list1->val);
                list1=list1->next;
                
            }
            else{
                temp->next=new ListNode(list2->val);
                list2=list2->next;
            }
            
            temp=temp->next;
        }
        
        while(list1 != NULL){
            temp->next=new ListNode(list1->val);
            list1=list1->next;
            temp=temp->next;
        }
        while(list2 != NULL){
            temp->next=new ListNode(list2->val);
            list2=list2->next;
            temp=temp->next;
        }
        return result->next;
        
    }
};