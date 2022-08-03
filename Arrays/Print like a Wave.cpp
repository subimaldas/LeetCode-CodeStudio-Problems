Question: Print like a wave
https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268?leftPanelTab=0

Time Complexity: o(n+m)

CODE:

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for (int col = 0; col < mCols; col++)
    {
        if (col & 1)
        {
            // odd case --> Bottom to top
            for (int row = nRows - 1; row >= 0; row--)
            {
                ans.push_back(arr[row][col]);
            }
        }

        else
        {
            // 0 or even case--> top to bottom
            for (int row = 0; row < nRows; row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
