/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
*/
//leetcode 14
using namespace std;
class Solution {
    
public:
   
    string longestCommonPrefix(vector<string>& strs) {
        string result="";
        int size=strs.size();
        int i=0,j=0,x=0,y=0;
        sort(strs.begin(),strs.end());
        if(strs.size()==1){
            return strs[0];
        }
        while(strs[0].size() != j){
            char temp = strs[0][j];
            for(int i=0; i<size; i++)
            {
                if(strs[i].size() == j || strs[i][j] != temp)
                {
                    return result;
                }
            }
            j++;
            result = result +  temp;
            
        }       
        return result;
    }
};