/*There are two -element arrays of integers,  and int k. Permute arrays such that the relation  holds for all  where A[i]+B[i]>=k.
*/
string twoArrays(int k, vector<int> A, vector<int> B) {
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    reverse(B.begin(), B.end());
    int n=A.size();

    for(int i=0;i<n;i++){
        if(A[i] + B[i] < k){
            return "NO";
        }
    }
    
    return "YES";
    
    
}