int lonelyinteger(vector<int> a) {

    sort(a.begin(),a.end());
    int size=a.size();
    int oddOne=0;
    for(int i=0;i<size-1;i=i+2){
        
        if(a[i] != a[i+1]){
            oddOne=a[i];
            break;
        }
        
    }
    if(size%2 ==1 && oddOne==0){
        oddOne=a[size-1];
    }
    
    return oddOne;

}