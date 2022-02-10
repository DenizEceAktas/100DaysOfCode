/* Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.
*/
//leetcode 13
class Solution {
public:
    int romanToInt(string s) {
        int size=s.size();
        
        int i=0;
        int number=0;
        int value=0;
        for(i=0;i<size;i++){
            if(s[i]=='I' && i+1<size && s[i+1] =='V' ){
                value=4;
                i++;
            }
            else if(s[i]=='I' &&  i+1<size  && s[i+1] =='X' ){
                value=9;
                i++;
            }
            else if(s[i]=='I'){
                value=1;
            }
            else if(s[i]=='V'){
                value=5;
            }
            else if(s[i]=='X' && i+1<size && s[i+1] =='L'){
                value=40;
                i++;
            }
            else if(s[i]=='X' && i+1<size && s[i+1] =='C'){
                value=90;
                i++;
            }
            else if(s[i]=='X'){
                value=10;
            }
            else if(s[i]=='L'){
                value=50;
            }
            else if(s[i]=='C' && i+1<size && s[i+1] =='D'){
                value=400;
                i++;
            }
            else if(s[i]=='C' && i+1<size && s[i+1] =='M'){
                value=900;
                i++;
            }
            else if(s[i]=='C'){
                value=100;
            }
            else if(s[i]=='D'){
                value=500;
            }
            else if(s[i]=='M'){
                value=1000;
            }
            
            
            number+=value;
        }
        
        
        return number;
    }
};