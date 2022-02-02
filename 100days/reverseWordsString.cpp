//Given a string s, reverse the order of characters in each //word within a sentence while still preserving whitespace and //initial word order.

class Solution {
public:
    string reverseWords(string s) {
        
        
        int i=0;
        int j=0;
        string newS;
        string finalR;
        for(i=0;i<s.size();i++){
            
            if(s[i]==' '){
                finalR= finalR+newS+" ";
                newS.clear();
                
            }
            else{
                
                newS=s[i]+newS;
            }
        }
        
        
        finalR= finalR+newS;
        
        
        
        
        return finalR;
        
        
    }
};