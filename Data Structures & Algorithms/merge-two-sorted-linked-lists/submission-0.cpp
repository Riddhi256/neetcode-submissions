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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;
        ListNode* temp = nullptr;
        ListNode* head;
        ListNode* i = list1;
        ListNode* j = list2;
        while (i != nullptr && j != nullptr) {
            if (temp == nullptr) {
                if (i->val < j->val) {
                    temp = new ListNode(i->val);
                    i = i->next;
                } else {
                    temp = new ListNode(j->val);
                    j = j->next;
                }
                head = temp;
            } else {
                if (i->val < j->val) {
                    temp->next = new ListNode(i->val);
                    i = i->next;
                } else {
                    temp->next = new ListNode(j->val);
                    j = j->next;
                }
                temp = temp->next;
            }
        }
        while (i != nullptr) {
            temp->next = new ListNode(i->val);
            i = i->next;
            temp = temp->next;
        }
        while (j != nullptr) {
            temp->next = new ListNode(j->val);
            j = j->next;
            temp = temp->next;
        }
        return head;
    }
};
