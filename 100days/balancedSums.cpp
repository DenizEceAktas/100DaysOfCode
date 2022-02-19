/*
challenge is to find an element of the array such that the sum of all elements to the left is equal to the sum of all elements to the right
*/
string balancedSums(vector<int> arr) {

    int size=arr.size(),i=0,j=0;
    int right=0,left=0;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            right+=arr[j];
        }
        for(j=0;j<i;j++){
            left+=arr[j];
        }
        if(right==left){
            return "YES";
        }
        right=0;
        left=0;
    }
    

    return "NO";
}