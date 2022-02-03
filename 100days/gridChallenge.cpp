/*Given a square grid of characters in the range ascii[a-z], rearrange elements of each row alphabetically, ascending. Determine if the columns are also in ascending alphabetical order, top to bottom. Return YES if they are or NO if they are not.
*/
string gridChallenge(vector<string> grid) {
    int size=grid.size();//num of words;
    int i=0;
    int wordSize=grid[0].size();
    for(i=0;i<size;i++){
        sort(grid[i].begin(),grid[i].end());
    }
    for(i=0;i<size-1;i++){
        for(int j=0;j<wordSize;j++){
            if(grid[i][j]-'0'>grid[i+1][j]-'0'){
                return "NO";
            }
        }
        
    }
    return "YES";
}