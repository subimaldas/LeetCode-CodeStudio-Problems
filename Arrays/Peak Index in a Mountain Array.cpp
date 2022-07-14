Question: Find the peak element in a mountain array

Approach: 
1. if arr[mid]< arr[mid=1] move start,  
2. else end=mid, here we can't use mid-1 because it will move the element before the peak element.
    
    
    Time Complexity: O(Logn). 
    Auxiliary Space: O(log n). 
 
        
CODE:
        
        class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int   s = 0;
        int   e = arr.size()-1;
        
        
     int mid =s+(e-s)/2;
        while(s<e){
            if(arr[mid]<arr[mid+1]){
                s=mid+ 1;
            }
            else{
                e=mid;
            }
              mid=s+(e-s)/2;
        }
        return s;
    }
};
