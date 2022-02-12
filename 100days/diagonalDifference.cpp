/*Given a square matrix, calculate the absolute difference between the sums of its diagonals.
*/
int diagonalDifference(vector<vector<int>> arr) {
    int result=0,x=0,i=0,y=0,right=0,left=0;
    int size=arr.size();
    for(i=0;i<size;i++){
        
        right+=arr[x][y];
        x++;
        y++;
    }
    x=0;
    y=size-1;
    for(i=0;i<size;i++){
        
        left+=arr[x][y];
        x++;
        y--;
    }
    
    result=abs(right-left);
    return result;

}