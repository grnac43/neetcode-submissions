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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;

        ListNode* tmp = head;

        while(tmp!=nullptr){
            size++;
            tmp = tmp->next;
        }

        int toRemove = size-n;
        ListNode* prev = nullptr;
        tmp = head;
        for(int i = 1; i <= toRemove; i++){
            prev = tmp;
            tmp = tmp->next;
        }

        if(prev==nullptr)
            return tmp->next;
        
        prev->next = tmp->next;
        tmp->next = nullptr;

        return head;
    }
};
