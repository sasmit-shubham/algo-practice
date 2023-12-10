class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // if inplace solution is not required, then it's cakewalk problem
        
        // psuedo code when inplace algo is not required
        
        // define a vector of same dimension of martix let's name this vector as ans
        // vector<int>ans(matrixSize, vector<int>(matrixSize,0))
        // if(matrix[i][j] == 0)
        //      paint ith row and jth col with 0
        // tc: n^4
        
        
        // solution without using the space i.e. inplace
        
        bool  doesFirstColhasZero = false;
        bool  doesFirstRowhasZero = false;
        const int n = matrix.size();
        const int m = matrix[0].size();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i == 0 && matrix[i][j] == 0){
                    doesFirstRowhasZero = true;      
                }
                if(j == 0 && matrix[i][j] == 0){
                    doesFirstColhasZero = true;      
                }
                
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        for(int i=1; i<n; i++){
            for(int j = 1; j<m; j++){
                if(matrix[i][0] == 0 or matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        
        if(doesFirstColhasZero){
            for(int j=0; j<m; j++){
                matrix[0][j] = 0;
            }
        }
        
        if(doesFirstRowhasZero){
            for(int i=0; i<n; i++){
                matrix[i][0] = 0;
            }
        }
        
    }
};
/**
    so first things that we can think of for this problem is that if cell[i][j] is zero then whole ith row and 
    jth column will be zero right?
    
    so it doesn't matter which cell of the ith row is zero, if any of them is zero then whole row will be zero, same applies for the column also. 
    
    it's very much possible that if first cell of the row is zero then on later part of the solution we can take this into the account and make all the cells of the particular row zero.
    
    now we have problem that how we will know that zero belongs orginally to this particular cell or not for that we can take a flag which will tell that whether first row and first column has zero or not. 
    
**/ 