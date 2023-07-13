Approach: Include, Exclude method same as subsets

Question: https://www.codingninjas.com/studio/problems/subsequences-of-string_985087

code:
#include <bits/stdc++.h> 

void solve( string str, string output, int i,vector<string>& ans) {
    //base case
    if(i>=str.length()) {
        if(output.length()>0) //this line is include the extra space {}
        ans.push_back(output);
         
      return ;
        }
    
    //exclude
    solve(str, output, i+1,ans);
  
    //include
    output.push_back(str[i]);
    solve(str, output, i+1, ans);
}

vector<string> subsequences(string str){
	
	  vector<string> ans;
    string output = "";
	  int index=0;
    solve(str,output, index, ans);
         
  return ans;
	
}
