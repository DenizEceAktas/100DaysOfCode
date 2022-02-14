int birthday(vector<int> s, int d, int m) {

    int size=s.size(),i=0;
    int result=0;
    int st=0;
    vector<int> current;
    int sum=0;
    for(i=0;i<size;i++){
       sum+=s[i];
       if(i-st+1 ==m){
           if(sum==d){
               result++;
           }
         
        sum-=s[st];
        st++;  
       }
           
    }
    return result;

}