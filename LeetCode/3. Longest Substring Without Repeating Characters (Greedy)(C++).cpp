//Problem: 3. Longest Substring Without Repeating Characters
//Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int Max = 0, cur = 0, left = 0;
        int arr[256] = {0}; 

        for (int right = 0; right < n; right++) {
            arr[s[right]]++; 
            cur++;

            while (arr[s[right]] > 1) {
                arr[s[left]]--; 
                left++;
                cur--;
            }

            Max = max(Max, cur); 
        }

        return Max;

    }
};