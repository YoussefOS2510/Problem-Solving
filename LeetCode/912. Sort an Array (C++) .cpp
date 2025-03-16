//Problem: 912. Sort an Array
//Link: https://leetcode.com/problems/sort-an-array/description/?envType=problem-list-v2&envId=merge-sort


class Solution {
public:
    vector<int> merge(vector<int>& left, vector<int>& right){
        int i=0,j=0;
        vector<int> answer;
        while(i<left.size() && j < right.size()){
            if(left[i]<right[j]){
                answer.push_back(left[i]);
                i++;
            }
            else{

                answer.push_back(right[j]);
                j++;
            }
        }

        if(i<left.size())
        {
            while(i<left.size()){
                answer.push_back(left[i]);
                i++;
            }
        }
        else if(j<right.size()){
            while(j<right.size()){
                answer.push_back(right[j]);
                j++;
            }
        }

        return answer;
    }

    vector<int> sortArray(vector<int>& nums) {
        if(nums.size()<=1)
            return nums;

        int half = nums.size() / 2;

        vector<int> secondHalf(nums.begin() + half, nums.end());
        vector<int> firstHalf(nums.begin(), nums.begin() + half);


        firstHalf = sortArray(firstHalf);
        secondHalf = sortArray(secondHalf);

        return merge(firstHalf, secondHalf);


    }
};