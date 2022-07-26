Question: Check palindrome , valid palindrome
link: https://leetcode.com/problems/valid-palindrome/

Approach: Check the 1st and last element of the string, if equal move both the point inwards(start, end)

Time Complexity:  O(N)
Space Complexity: O(1)


CODE:
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s)
{

  //Two check the  string is empty or not 
  if (s.empty())
    return false;
  
  int start = 0;
  int end = s.length() - 1;

  while (start <= end)
  {

    //The isalnum() function checks whether the argument passed is an alphabet or number or not.
    if (!isalnum(s[start]))
    {
      start++;
    }
    else if (!isalnum(s[end]))
    {
      end--;
    }
    
    //upperCase to lowercase Conversion
    else if (tolower(s[start]) == tolower(s[end]))
    {
      start++;
      end--;
    }
    else
    {
      return false;
    }
  }
  return true;
}



int main()
{

  string Name;
  cout << "Enter your name" << endl;
  cin >> Name;
  bool ans = isPalindrome(Name);

  if (ans == 1)
  {
    cout << "Palindrome";
  }
  else
  {
    cout << "Not Palindrome";
  }
  return 0;
}
