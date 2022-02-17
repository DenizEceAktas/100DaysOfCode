//hackerrank ceaser cipher
string caesarCipher(string s, int k) {
    
    string alphabet ="abcdefghijklmnopqrstuvwxyz";
    string answer="";
    
    
    
    for(int i=0;i<s.size();i++){
        if(islower(s[i])){
            answer+= alphabet[(alphabet.find(s[i]) +k)%alphabet.size()];
            
        }
        else if(isupper(s[i])){
            answer+= toupper(alphabet[(alphabet.find(tolower(s[i])) +k)%alphabet.size()]);
        }
        else{
            answer+=s[i];
        }
    }
    
    
    return answer;
    
}