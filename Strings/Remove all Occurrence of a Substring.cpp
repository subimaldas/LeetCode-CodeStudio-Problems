Question: https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

Approach:Using STL function( find, erase )
  

CODE:

class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        //Check until the string size is zero and the given part should present
        while(s.length()!=0 && s.find(part)< s.length()){
            
            //Erase the part using SLT(Erase)
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};
