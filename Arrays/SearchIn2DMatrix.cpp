Question: Search element in 2d matrix
https://practice.geeksforgeeks.org/problems/search-in-a-matrix17201720/0
Conditon: Rows and columns are sorted 



Approach: Take the last element from 1st row,last column and compare it with the given target 
          if element > target ,, then reduce the column



bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
       //declaring the row and col size
       int row= matrix.size();
       int col= matrix[0].size();
        
        //declaring the row and col index 
        int rowIndex= 0;
        int colIndex= col-1;
        
        while(rowIndex< row && colIndex >=0){
        
            int element= matrix[rowIndex][colIndex];
            
            if(element==target){
                return 1;
            }
            if(element< target){
                rowIndex++;
            }
            else{
                colIndex--;
            } 
        }
        return 0;
    }  
