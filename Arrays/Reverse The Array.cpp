void reverseArray(vector<int> &arr , int m)
{
    
    //Here the given position is m and wee have to reverse element after M
    int start =m+1;
    int end = arr.size() - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++, end--;
    
    }
}
