/*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
*/
//leetcode 7
class Solution {
public:
    int reverse(int x) {
        
        if(x > pow(2,31)-1 || x < -pow(2,31)){
                return 0;
            }
        
        int rever=0;
        long value=0;
        bool negative=false;
        
        if(x<0){
             negative=true;
        }
        value=x;
        if(negative==true){
            if(-value> pow(2,31)-1){
                return 0;
            }
             x=-x;
        }
               value=0;
        while(x>0){
            
            if(value*10 >pow(2,31)-1){
                return 0;
            }
            rever=rever*10 + x%10;
            value=rever;
            x=x/10;
        }
        
        if(negative==true){
            rever=-rever;
        }
        
        return rever;
    }
};