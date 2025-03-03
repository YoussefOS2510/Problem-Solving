//Problem: 206. Reverse Linked List
//Link: https://leetcode.com/problems/reverse-linked-list/description/?envType=problem-list-v2&envId=recursion

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) return nullptr;  
        if(head->next == nullptr) return new ListNode(head->val);  

        ListNode* newHead = reverseList(head->next); 

        ListNode* temp = newHead;
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new ListNode(head->val);

        return newHead;
    }
};