/*Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.
*/
//leetcode 9
class Solution {
public:
    bool isPalindrome(int x) {
        
        vector<int> digits;
        if(x<0){
            return false;
        }
        while(x>0){
            int dig=x%10;
            digits.push_back(dig);            
            x=x/10;
        }
        int j=digits.size()-1;
        for(int i=0;i<j;i++){
            if(digits[i]!=digits[j]){
                return false;
            }
            
            j--;
        }
        return true;
    }
};