Question: Target is given , find it in the rotated sorteed array

Approach 1: Basic - By linear search(not  a  good approach)
  
  
Approach 2: use the pivot point ,and binary search to locate the element 
  

Time Complexity: O(log n)
Space Complexity: o(1)
  
CODE:
int getPivot(vector<int>& arr, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(vector<int>& arr, int s, int e, int key)
{
    int start = s;
    int end = e;

    int mid = start + (end - start) / 2; // mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        
        //For going into left part
       if (arr[mid] > key)   
        {
            end = mid - 1;
        }
        else
        {
            
        //For going into right part
            start = mid + 1;
        }
        
        //Update Mid 
        mid = start + (end - start) / 2;
    }
    
    //If the element is not present
    return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
  int pivot= getPivot(arr,n);
    if(k>= arr[pivot]&& k<=arr[n-1]){
        
        //applying Binary search on the 2nd line
        return binarySearch(arr, pivot , n-1, k);
    }
    else{
        
        //applying Binary search on the 1st line
        return binarySearch(arr,0, pivot-1,k);
    }
}



*******
Better Approach: Using start ,end and mid  ********

Time Complexity: O(log n)
Space Complexity: o(1)

CODE:

#include <bits/stdc++.h>

using namespace std;

int search(vector<int> &nums, int target)
{
  int s = 0, e = nums.size() - 1;

  while (s <= e)
  {
    int mid = s + (e - s) / 2;

    if (nums[mid] == target)
      return mid;

    // Left side is Sorted
    if (nums[s] <= nums[mid])
    {

      // Element is present in the left half or not
      if (nums[s] <= target && nums[mid] >= target)
        e = mid - 1;
      else
        s = mid + 1;
    }

    // Right half is sorted
    else
    {
      
       // Element is present in the left half or not
      if (nums[mid] <= target && target <= nums[e])
        s = mid + 1;
      else
        e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return -1;
}

int main()
{
  vector<int> nums = {4, 5, 6, 7, 0, 1, 2, 3};
  int target = 3;
  cout << "The index in which the target is present is " << search(nums, target);

  return 0;
}
