Approach:

1. In different round, we take the minimum value and  place it in the 1st place and following the same.
2.  Swap the are[i],minIndex
3. Round = n-1

Time Complexity: O(n²)
Space Complexity:O(1)
  
  
CODE:
void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n-1; i++ ) {
        // We  consider the 1st element as the minValue
        int minIndex = i;
        
        for(int j = i+1; j<n; j++) {
            
            //if we get any element greater then the 1st element swap them, thus updating the j
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
            
        }
        
        //swaping to get the desired position, sorting (-->)
        swap(arr[minIndex], arr[i]);
    }
}
