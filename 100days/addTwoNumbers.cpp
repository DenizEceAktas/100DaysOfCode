/*You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
*/
//leetcode 2
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        long size1=0;
        int size2=0,i;
        ListNode* result = new ListNode();
        ListNode* nums = result;
        ListNode* prev = new ListNode();
        int sums=0;
        int carry=0;
        while(l1 != NULL || l2 !=NULL){
           
            sums=0;
            
            if(l1!=NULL){
                sums  = l1->val+sums;
            }
            if(l2 !=NULL){
                sums=sums+ l2->val;
            }
            
            
            int value=(sums + carry)%10;
            if(sums + carry<10){
                carry=0;
            }
            
            if(sums>9){
               carry=sums/10;
            }
            
            
            nums->next = new ListNode(value);
           
            if(l1!=NULL){
                l1 =l1->next;
            }
            if(l2 !=NULL){
                 l2 =l2->next;
            }
            
           
            
            nums=nums->next;
            
        }
        
        if(carry>0){
            nums->next = new ListNode(carry);
        }
        
        return result->next;
        
    }
};