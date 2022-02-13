//leetcode 28

class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(needle.size()==0){
            return 0;
        }
        if (haystack.size()==0){
            return -1;
        }
        int result=haystack.find(needle);
        
        return result;
    }
};