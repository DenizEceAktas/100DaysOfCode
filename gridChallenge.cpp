/*
Given a square grid of characters in the range ascii[a-z], rearrange elements of each row alphabetically, ascending. Determine if the columns are also in ascending alphabetical order, top to bottom. Return YES if they are or NO if they are not.
*/

string gridChallenge(vector<string> grid) {

    int size=grid.size();
    int i=0;
    
    for(i=0;i<size;i++){
        sort(grid[i].begin(),grid[i].end());
        cout<<grid[i]<<"\n";
    }
    
    for(i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if((int)(grid[j][i]-'0')>(int)(grid[j+1][i]-'0')){
                return "NO";
            }
            
        }
        
        
    }
    
    
    return "YES";
}