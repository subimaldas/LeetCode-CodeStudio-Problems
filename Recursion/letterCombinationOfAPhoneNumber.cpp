Approach: 
Solved using recursive and Backtracking approach
1. This can easily be solved using simple backtracking approach where the digits are mapped to their particular letters and stored in the vector.
2.Then this vector is passed through the solve function where the index iterates through the vector 
  i.e temp and the for loop iterates through the character present at the string.
3.Then using pick and not pick method we can push the values in the ans vector.

  
  
Time complexity: O(4^N).
Space complexity: O(4^N).


Question: https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/



CODE:
class Solution {


    void solve(string digit, string output, int index, vector<string> &ans, string mapping[]){
      
    //base case 
    if(index>=digit.length()){
    ans.push_back(output);
    return;
    }
 
 
 int number= digit[index]- '0'; // 0 is included to get the index like 0,1 2 if not then ASCII value
 string value= mapping[number];


    for(int i=0; i< value.length();i++){
    output.push_back(value[i]);
     solve(digit, output, index+1,ans,mapping);

     output.pop_back();  //removing the element from the empty string not not repeating the element 

}


    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
       
        if (digits.length()==0)
        return ans;


        string output;
        int index=0;
        string mapping[10]= {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits, output, index,ans,mapping);
        return ans;
    }
};
