/*Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer (similar to C/C++'s atoi function).

The algorithm for myAtoi(string s) is as follows:

Read in and ignore any leading whitespace.
Check if the next character (if not already at the end of the string) is '-' or '+'. Read this character in if it is either. This determines if the final result is negative or positive respectively. Assume the result is positive if neither is present.
Read in next the characters until the next non-digit character or the end of the input is reached. The rest of the string is ignored.
Convert these digits into an integer (i.e. "123" -> 123, "0032" -> 32). If no digits were read, then the integer is 0. Change the sign as necessary (from step 2).
If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then clamp the integer so that it remains in the range. Specifically, integers less than -231 should be clamped to -231, and integers greater than 231 - 1 should be clamped to 231 - 1.
Return the integer as the final result.
Note:

Only the space character ' ' is considered a whitespace character.
Do not ignore any characters other than the leading whitespace or the rest of the string after the digits.
*/
//leetcode 8
class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        double long result=0;
        int size=s.size();
        bool negative=false;
        
        while(s[i] == ' '){
            i++;
        }
        if(i<size && s[i]=='-'){
            negative=true;
            i++;
        }
        else if(i<size && s[i]=='+'){
            negative=false;
            i++;
        }
        bool numberExist=false;
        for(i;i<size;i++){
            if(s[i]=='+' || s[i]=='-' ){
                if(numberExist==true){
                    break;
                }
                return 0;
            }
            if(s[i]=='0' || s[i]=='1' || s[i]=='2' ||s[i]=='3'|| s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'){
                result=result +(int)s[i] - '0';
                result*=10;
                numberExist=true;
            }
            else{
                break;
            }      
        }
        result=result/10;
        if(negative==true) {
            
            result=-result;
        }
        if(result>pow(2,31)-1){
           
            
            return pow(2,31)-1;
        } 
         if(result < -pow(2,31)){
            return -pow(2,31);
        }
        
        
        return result;
        
        
        
    }
};