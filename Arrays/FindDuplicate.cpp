#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findDuplicate(vector<int> &nums)
{
    int slow = nums[0];
    int fast = nums[0];
    do
    {
        slow = nums[slow];       // Move slow by 1
        fast = nums[nums[fast]]; // Move fast by 2
    } while (slow != fast);
    fast = nums[0];
    while (slow != fast) //After getting the meeting position of slow and fast. Slow to starting positon and move both fast and slow by 1
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return fast;
}
int main()
{
    vector<int> arr;
    arr = {1, 3, 4, 2, 3};
    cout << "The duplicate element is:" << findDuplicate(arr) << endl;
}