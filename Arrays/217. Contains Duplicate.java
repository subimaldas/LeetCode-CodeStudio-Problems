Best approach : Using hashset as in hashset we can update any repeatative value

class Solution {
    public boolean containsDuplicate(int[] nums) {
        
    // Create hashset to store integers
    Set<Integer> intSet = new HashSet<>();

    // Iterate over each element
    for (int num : nums) {

      // Check the number in hashset
      if (intSet.contains(num))
        return true;

      // Add the number to hashset
      intSet.add(num);
    }

    return false;
    }
}
