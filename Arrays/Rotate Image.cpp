Question : Rotate matrix/ Image
https://leetcode.com/problems/rotate-image/

Approach: For 90" transpose the matrix and then swap the rows

Time Complexity: O(NN) + O(NN).One O(N*N) for transposing the matrix and the other for reversing the matrix.
Space Complexity: O(1).
  
  CODE:

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        // transposing the matrix
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < row; col++)
            {
                swap(matrix[row][col], matrix[col][row]);
            }
        }
        // reversing each row of the matrix
        for (int row = 0; row < n; row++)
        {
            reverse(matrix[row].begin(), matrix[row].end());
        }
    }
};
