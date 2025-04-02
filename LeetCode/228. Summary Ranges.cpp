//Problem: 228. Summary Ranges
//Link: https://leetcode.com/problems/summary-ranges/description/

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
       
        vector<string> v;
        string s = "";
        int cnt = 0;

        if (nums.size() == 0)  // Removed the incorrect semicolon
            return v;

        if (nums.size() == 1) {
            s += to_string(nums[0]);  
            v.push_back(s);
            return v;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (i + 1 < nums.size() && nums[i] + 1 == nums[i + 1] && cnt == 0) {
                s += to_string(nums[i]);
                s += "->";
                cnt++;
            } 
            else if (i + 1 >= nums.size() || nums[i] + 1 != nums[i + 1]) {  
                if (cnt != 0) {
                    s += to_string(nums[i]);
                    v.push_back(s);
                    s = "";
                    cnt = 0;
                } else {
                    v.push_back(to_string(nums[i]));
                }
            }
        }

        return v;
    }
};
