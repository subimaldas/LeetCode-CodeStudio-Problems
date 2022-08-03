Question: https://leetcode.com/problems/spiral-matrix/

Approach: 1. Print strarting row(left to right)
          2. Print Ending Column(top to bottom)
          3. Print Ending Row(right to left)
          4. Print Starting Column(bottom to top)
          5. Direction variable is used to serialize steps from 1 to 4, without direction varaible, it will print serially all the element 
  
CODE:
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
      
        //Index Initialization
        int startingCol = 0, endingCol = col - 1, endingRow = row - 1, startingRow = 0;
        int direction = 1;
        vector<int> ans;
      
        while (startingCol <= endingCol && startingRow <= endingRow)
        {
            if (direction == 1)
            {  
              //printing strarting row(left to right)
                for (int i = startingCol; i <= endingCol; i++)
                    ans.push_back(matrix[startingRow][i]);
                direction = 2;
                startingRow++;
            }

            else if (direction == 2)
            {
              //Printing Ending Column(top to bottom)
                for (int i = startingRow; i <= endingRow; i++)
                    ans.push_back(matrix[i][endingCol]);
                direction = 3;
                endingCol--;
            }

            else if (direction == 3)
            {
              //Printing Ending Row(right to left)
                for (int i = endingCol; i >= startingCol; i--)
                    ans.push_back(matrix[endingRow][i]);
                direction = 4;
                endingRow--;
            }

            else if (direction == 4)
            {
              //Printing Starting Column(bottom to top)
                for (int i = endingRow; i >= startingRow; i--)
                    ans.push_back(matrix[i][startingCol]);
                direction = 1;
                startingCol++;
            }
        }
        return ans;
    }
};
