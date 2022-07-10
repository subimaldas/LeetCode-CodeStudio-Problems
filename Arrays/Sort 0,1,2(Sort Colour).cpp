Approach: Using 3Pointer Approach

*Dutch National Flag Algorithm*

CODE:
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
   int mid = 0;
   int high = nums.size()-1;
    
    while(mid<=high)
    {
        //When mid is 0
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++; 
            mid++;    
        }
        //When mid is 1
        else if(nums[mid]==1)
         mid++;
        
        else{
            //When mid is 2.
            swap(nums[mid],nums[high]);
            high--;
        }
    }
    }
};
