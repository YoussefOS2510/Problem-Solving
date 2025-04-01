//Problem: 14. Longest Common Prefix
//Link: https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string pre="";
        bool x=0;
        for(int i=0;i<strs[0].size();i++){
            

            for(int j=0;j<strs.size();j++){

                if(strs[j]=="")
                 return "";


                if(strs[j][i]!=strs[0][i]){
                    x=1;
                    break;
                }
            }
            if(x)
                break;
            
            pre+=strs[0][i];

        }

        return pre;

    }
};