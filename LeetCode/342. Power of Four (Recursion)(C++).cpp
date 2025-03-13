//Problem: 342. Power of Four
//Link: https://leetcode.com/problems/power-of-four/description/?envType=problem-list-v2&envId=recursion

class Solution {
public:
    bool isPowerOfFour(double n) {
        if(n==4 || n==1)
            return true;
        else if (n<4)
            return false;
        
        return isPowerOfFour(n/4);
    }
};