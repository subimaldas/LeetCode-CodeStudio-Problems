Approach: 1. In bubble sort , in every Ith round the ith largest element is placed in the right place .
          2. total round is (n-1)
          3. if a>b--> swap


Time Complexity:O(n2)
Space Complexity:O(1)
  
  CODE:
void bubbleSort(vector<int>& arr, int n)
{   
    // round from 1 to n-1
    for(int i=1;i<n;i++){
        
         // For More optised we use bool, in case the array is already sorted
        bool swapped= false;
        
      
      
       for(int j=0;j<n-i;j++) // for each round my j is decreasing
       {
           if(arr[j]>arr[j+1]){
               swap(arr[j],arr[j+1]);
               
               //Mark true is swapping is done , that means the array is unsorted
               swapped= true;
           }
       }
        // For sorted array
        if(swapped== false)
            break;
   
   }
}
