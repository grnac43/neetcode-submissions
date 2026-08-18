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
        ListNode* temp;
        ListNode* prev = nullptr;

        if(!head)
            return head;

        while(head!=nullptr){
            temp = head;
            head = head->next;
            temp->next = prev;
            prev = temp;
        }

        return temp;
    }
};
