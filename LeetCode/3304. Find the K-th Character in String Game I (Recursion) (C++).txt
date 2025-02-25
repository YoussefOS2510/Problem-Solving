//Problem: 3304. Find the K-th Character in String Game I
//Link: https://leetcode.com/problems/find-the-k-th-character-in-string-game-i/description/?envType=problem-list-v2&envId=recursion

class Solution {
public:
    string word = "a";
    char kthCharacter(int k) {
        int n = word.size();
        for(int i=0;i<n;i++){
            word += (word[i]+1);
        }


        if(k>word.size())
            return kthCharacter(k);
        else
            return word[k-1];

    }
};