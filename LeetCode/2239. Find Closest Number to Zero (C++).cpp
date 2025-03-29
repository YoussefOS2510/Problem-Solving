//Problem: 2239. Find Closest Number to Zero
//Link: https://leetcode.com/problems/find-closest-number-to-zero/description/

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        long long negmin = INT_MIN, pvemin = INT_MAX;
        
        for (int num : nums) {
            if (num < 0 && num > negmin)
                negmin = num;
            if (num > 0 && num < pvemin)
                pvemin = num;
            if (num == 0) 
                return 0;
        }
        
        if (pvemin > -negmin) return negmin;
        if (-negmin > pvemin) return pvemin;

        return (-negmin <= pvemin) ? pvemin : negmin;
    }
};