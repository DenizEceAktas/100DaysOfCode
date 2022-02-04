/*Given a string s, find the length of the longest substring without repeating characters.
*/
//leetcode 3
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int size= s.size();
        int n=0;
        int maximum=0;
        if(size==1)
        {
            return 1;
        } 
        if(size==2 && s[0]==s[1]){
            return 1;
        }
        for(int i=0;i<size;i++){
            
            for(int j=0;j< size;j++){   
                if(alone(s,i,j)){
                     n=max(n, j-i+1);
                    
               }
                
            }         
        }
            
        return n;
    }
    
    
    bool alone(string s, int i, int j){
        
        map<char,bool> went;
        for (int k = i; k <= j; k++) {
            if (went.find(s[k])!=went.end() && went.find(s[k])->second == true)
                return false;
            went.insert(pair<char,bool>(s[k],true));
        }
        went.clear();
        return true;
        
    }
};