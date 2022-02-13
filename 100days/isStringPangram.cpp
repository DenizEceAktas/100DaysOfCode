/*is given string pangram
*/
string pangrams(string s) {
    string alphabet="abcdefghijklmnopqrstuvwxyz ";
    string current="";
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
        if(find(current.begin(),current.end(),s[i])==current.end()){
            current=current+s[i];
        }
    }
    cout<<current<<"\n";
    if(current.size()==alphabet.size()){
        return "pangram";
    }
    return "not pangram";
}