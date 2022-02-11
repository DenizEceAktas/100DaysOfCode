/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
*/
//leetcode 20
class Solution {
public:
    bool isValid(string s) {
        
        stack<char> par;
        if(s.size()==1){
            return false;
        }
        
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='('){
                par.push('(');
            }
             else if(s[i]=='{'){
                par.push('{');
            }
             else if(s[i]=='['){
                par.push('[');
            }
            else if(s[i]==')' && !par.empty() &&par.top()=='(' ){
                par.pop();
            }
            else  if(s[i]=='}'&& !par.empty() && par.top()=='{'){
                par.pop();
            }
            else if(s[i]==']'&& !par.empty() && par.top()=='['){
                par.pop();
            }
            else{
                return false;
            }
            
        }
        if(!par.empty()){
            return false;
        }
        
        return true;
        
    }
};