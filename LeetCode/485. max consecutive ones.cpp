//Problem: 485. max consecutive ones
//Link: https://leetcode.com/problems/max-consecutive-ones/description/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int cur=0;
        int Max=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cur++;
            }
            else{
                cur=0;
            }
            Max = max(Max,cur);

        }

        return Max;
    }
};