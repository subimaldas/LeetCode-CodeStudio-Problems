Approach:
         1.Here we use two variables
         2.Moving from 0th index if we get 0 then simply ignore and continue moving forward but in case of non zero value swap the element with the 0.
         3. Swap the NonZero/count variable with the ith value if it is non zero

CODE: 

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
	
        // Shifting all the non zeros valus to the left size
        int NonZero/count=0;
        
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]!=0){
                
                swap(nums[i],nums[NonZero/count++]);
            }
        }
    }
    
};
