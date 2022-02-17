//hackerrank maxmin 

int maxMin(int k, vector<int> arr) {
    int current=0;
    int i=0;
    sort(arr.begin(),arr.end());
    int minimum=arr[arr.size()-1]-arr[0];
    for(i=0;i<arr.size()-k+1;i++){
        
        current=arr[i+k-1]-arr[i];
        
        minimum=min(current,minimum);
        current=0;
    }
    
    
    return minimum;
}