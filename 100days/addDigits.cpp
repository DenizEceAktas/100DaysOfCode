/*Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
*/
//leetcode 258
class Solution {
public:
    int addDigits(int num) {
        
        int carry=0;
        while(num > 9){
            
            
            carry=num%10;
            num=num/10;
            num=num+carry;
        }
        
        return num;
        
    }
};