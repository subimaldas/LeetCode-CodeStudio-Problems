Approach: its like Arranging the cards, in insertion sort we just shift the element not directly sort it.  

  
Time Complexity: O(n2)
Space Complexity:O(1)

CODE:

void insertionSort(int n, vector<int> &arr){
    
       int i = 1;
       while(i<n){
         
           int temp= arr[i];
           int j =i-1;
             while (j>=0){
                  
              //shift to the right  
               if(arr[j]>temp){ 
                 arr[j+1]=arr[j];
                }
               else{
                    // stop
                    break;
                }
                j--;
            }
           arr[j+1]= temp;
           i++;
    }
}
