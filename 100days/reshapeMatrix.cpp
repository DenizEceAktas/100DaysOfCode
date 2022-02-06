/*In MATLAB, there is a handy function called reshape which can reshape an m x n matrix into a new one with a different size r x c keeping its original data.

You are given an m x n matrix mat and two integers r and c representing the number of rows and the number of columns of the wanted reshaped matrix.

The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.

If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.
*/
//leetcode 566
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        vector<vector<int>> shape(r,vector<int>(c));
        
        if(r*c !=mat.size() *mat[0].size()){
            return mat;
        }
        int i=0;
        int j=0;
        int row=0;
        int column=0;
        for(i=0;i<mat.size();i++){
            for(j=0;j<mat[0].size();j++){
                
                if(column==c){
                    row++;
                    column=0;
                    
                }
                
                    
                    shape[row][column]=mat[i][j];
                    column++;
                
                
                
            }
           
            
        }
        
        
        return shape;
    }
};