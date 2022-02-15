//hackkerrank
int sockMerchant(int n, vector<int> ar) {

    int i=0;
    int result=0;
    sort(ar.begin(),ar.end());
    for(i=0;i<n;i=i+2){
        if(ar[i]==ar[i+1]){
            result++;
        }
        else{i--;}
    }
    
    
    
        
    return result;
}