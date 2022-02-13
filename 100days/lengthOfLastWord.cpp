//leetcode 58

class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int size=s.size();
        int i=0;
        int result=0;
        int index=0;
        for(i=0;i<size-1;i++){
            if(s[i]==' ' && s[i+1] !=NULL && s[i+1] !=' '){
                index=i+1;
            }
            
        }
        result=size-index;
        for(i=size-1;i>index;i--){
            if(s[i]==' '){
                result--;
            }
        }
        return result;
    }
};