Optimal Approach: kadane's algorithm
steps:   Sum=sum+ arr[1]   maximum= maxi= max(sum, maxi)           if sum<0 then sum=0    lastly return the maxi to get the maximum subarray sum
 

class Solution {
public:
    int maxSubArray(vector<int>& nums) { 
        int sum=0; 
        int maxi= INT_MIN;    // nums[0]
        for(int i=0;i<nums.size();i++){
          //1st step
            sum=sum+nums[i];
          //2nd step
            maxi= max(maxi,sum);
          //third step
             if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};
