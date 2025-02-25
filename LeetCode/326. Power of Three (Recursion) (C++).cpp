Problem: 326. Power of Three
Link: https://leetcode.com/problems/power-of-three/description/?source=submission-noac

class Solution {
public:
    
    bool isPowerOfThree(int n) {
        if( (double) n/3 == 1 || n == 1)
            return true;
        else if(n % 3 !=0 || n <= 0)
            return false;

        return isPowerOfThree(n/3);
    }
};