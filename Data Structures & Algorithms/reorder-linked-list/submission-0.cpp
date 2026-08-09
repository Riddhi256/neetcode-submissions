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
        ListNode* temp = head;
        int n = 1;
        while(temp->next!=nullptr)
        {
            temp = temp->next;
            n++;
        }
        n/=2;
        while(n--)
        {
            ListNode* prev = head;
            while(prev->next->next != nullptr)
            {
                prev = prev->next;
            }
            temp = prev->next;
            prev->next = nullptr;
            ListNode* next = head->next;
            head->next = temp;
            temp->next = next;
            head = next;
        }
    }
};
