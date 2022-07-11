Approach:
Here in the case we use % to slove this problem
Using temp vector for not allowing the value to overwrite

CODE:

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        
        
        for( int i=0; i< nums.size();i++){
            temp[(i+k)% nums.size()] = nums[i];
        }
        //copy temp into nums vector 
        nums=temp;
    }
};
