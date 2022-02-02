//Write a function that reverses a string. The input string is //given as an array of characters s.
class Solution {
public:
    void reverseString(vector<char>& s) {
        
        if(s.size()<1 ){
            return;
        }
        int i=0;
        int n=s.size();
        for(i=0;i<n/2;i++){
            
            char temp= s[i];
            s[i]= s[n-1-i];
            s[n-1-i]=temp;
            
            
        }
        
        
    }
};

//reverse(s.begin(),s.end());