//Problem: 231. Power of Two
//Link: https://leetcode.com/problems/power-of-two/description/?envType=problem-list-v2&envId=recursion

class Solution {
public:
    bool isPowerOfTwo(double n) {
        if(n==1 || n==2)
            return true;
        else if(n<1)
            return false;


        return isPowerOfTwo(n/2);
    }
};