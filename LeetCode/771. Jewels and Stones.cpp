//Problem: 771. Jewels and Stones
//Link: https://leetcode.com/problems/jewels-and-stones/description/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        unordered_set<char> jewelSet(jewels.begin(), jewels.end());
        int cnt = 0;

        for (char c : stones) {
            if (jewelSet.count(c)) cnt++;
        }

        return cnt;
    }
};