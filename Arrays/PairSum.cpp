Question: Find pair in the given array

Approach: Using Brute Force which is not recommended


Approach 2: Using two pointers

steps: 
1.First we sort the given array
2. Then we use two pointers, left and right 
3.if target is  less then the sum move right and viceversa
4. Now, we run another loop to find the indices of the elements in the actual array, i.e [2,1,3,4]

Time Complexity: O(NlogN)
Space Complexity: O(N)
  


CODE:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
    vector<int> temp,arr;
    	arr = nums;

    	sort(arr.begin(), arr.end());

    	int left=0,right=nums.size()-1;
    	int n1,n2;

    	while(left<right){
        	if(arr[left]+arr[right]==target){

            	n1 = arr[left];
            	n2 = arr[right];
               break;

        	}
        	else if(arr[left]+arr[right]>target)
            	    right--;
        	else
            	    left++;
    	}

    	for(int i=0;i<nums.size();++i){

        	if(nums[i]==n1)
            	    temp.push_back(i);
        	else if(nums[i]==n2)
            	    temp.push_back(i);
    	}

    	    return temp;
    }
    
};
