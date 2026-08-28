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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *l1, *l2;

        l2 = slow->next;
        slow->next = nullptr;
        ListNode *prev = nullptr;

        while(l2 != nullptr){
            auto tmp = l2->next;
            l2->next = prev;
            prev = l2;
            l2 = tmp;
        }

        l1 = head;
        l2 = prev;

        while(l2!=nullptr){
            auto tmp1 = l1->next;
            auto tmp2 = l2->next;
            l1->next = l2;
            l2->next = tmp1;
            l1 = tmp1;
            l2 = tmp2;
        }
    }
};
