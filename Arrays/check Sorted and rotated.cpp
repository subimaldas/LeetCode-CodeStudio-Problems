Question: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/


Approach 1: Approach:
if array is sorted and rotated then, there is only 1 break point where (nums[x-1] > nums[x]),
if there exist a pair then the value of count will increase.
  

Time complexity: O(N)
Space complexity: O(1)

  
  CODE:

class Solution {
public:
    bool check(vector<int>& nums) {
        
        
        int count= 0;
        int n=nums.size();
        for(int i=1; i<n;i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        
        // This function is used to check the rotation
        if(nums[n-1]>nums[0]){
            count++;
        }
        
        return count<=1; 
    }
};





************************************************
Approach 2:

if array is sorted and rotated then, there is only 1 break point where (nums[x] > nums[x+1]),
if array is only sorted then, there is 0 break point.

Time complexity: O(N)
Space complexity: O(1)

  
  
CODE:
bool check(vector<int>& nums) {
        
        int size = nums.size();
        int count = 0;

        for(int x=0; x<size; x++)
        {   
            if(nums[x] > nums[(x+1)%size])
                count ++;
        }
        return (count <= 1);
    }

-->why am I doing %size??

Concider this case: nums = [2,1,3,4]

This case will give you result true without %size but it is not sorted and rotated. So we have to check last and first element also.
