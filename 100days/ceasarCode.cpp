/*Julius Caesar protected his confidential information by encrypting it using a cipher. Caesar's cipher shifts each letter by a number of letters. If the shift takes you past the end of the alphabet, just rotate back to the front of the alphabet. In the case of a rotation by 3, w, x, y and z would map to z, a, b and c.

*/

string caesarCipher(string s, int k) {
    
    map<char,char> mapping;
    string result;
    int i=0;
    int count=0;
    string alphabet="abcdefghijklmnopqrstuvwxyz";
    for(i=0;i<alphabet.size();i++){
        
        mapping.insert(pair<char,char>(alphabet[i],alphabet[(i+k)%alphabet.size()]));
        
    }
    for(i=0;i<alphabet.size();i++){
        
        mapping.insert(pair<char,char>(toupper(alphabet[i]),toupper(alphabet[(i+k)%alphabet.size()])));
        
    }
    for(i=0;i<s.size();i++){
        if(mapping.find(s[i])==mapping.end()){
            result+=s[i];
        }
        else{
            result+=mapping.find(s[i])->second;
        }
        
        
    }    

    return result;
}