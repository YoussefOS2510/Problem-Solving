//Problem: 13. Roman to Integer
//Link: https://leetcode.com/problems/roman-to-integer/description/

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> values = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        
        int n = 0;
        int length = s.length();
        
        for(int i = 0; i < length; i++) {

            if (i < length - 1 && values[s[i]] < values[s[i + 1]]) {
                n -= values[s[i]];
            } else {
                n += values[s[i]]; 
            }
        }
        
        return n;
    }
};