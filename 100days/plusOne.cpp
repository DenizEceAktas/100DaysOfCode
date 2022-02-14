//leetcode 66

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector<int> result;
        long number=0;
        int carry=1;
        if(digits.size()==1 && digits[0]<9){
            result.push_back(digits[0]+1);
            return result;
        }
        for(int i=digits.size()-1;i>0;i--){
            if(carry+digits[i]>9){
                
                carry=1;
                digits[i]=0;
                
            } 
            else{
                digits[i]+=carry;
                carry=0;
            }
            
            
        }
        if(digits[0] +carry>9){
            
            result.push_back(1);
            digits[0]=0;
            
            
        }
        else{
            digits[0]+=carry;
        }
        for(int i=0;i<digits.size();i++){
                result.push_back(digits[i]);
            }
        
        
        return result;
    }
};