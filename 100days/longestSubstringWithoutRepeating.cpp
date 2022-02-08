/*Given a string s, find the length of the longest substring without repeating characters.
*/
// leetcode 3
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int size= s.size();
        int n=0;
        int maximum=0;
        map<char,int> used;
        map<char,int> started;
        int current=0;
        if(size==1)
        {
            return 1;
        } 
        if(size==2 && s[0]==s[1]){
            return 1;
        }
        int i=0;
        for(i=0;i<size;i++){
            if(used.find(s[i]) == used.end()){
                used.insert(pair<char,int>(s[i],1));
                started.insert(pair<char,int>(s[i],i));
                current++;
            }
            else{
                
                maximum=max(maximum,current);
                i=started.find(s[i])->second;
                started.clear();
                used.clear();
                current=0;
            }
            
        }
        used.clear();
        started.clear();
        maximum=max(maximum,current);
            
        return maximum;
    }
    
    
  
};