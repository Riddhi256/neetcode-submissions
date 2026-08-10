class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;

        // Find length
        ListNode* curr = head;
        while (curr != nullptr) {
            count++;
            curr = curr->next;
        }

        // Convert n-th from end to 0-based index from beginning
        int delNode = count - n;

        // If we need to delete head
        if (delNode == 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        // Find middle
        int mid = (count - 1) / 2;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev;
        ListNode* temp;

        // Target is in left half
        if (delNode <= mid) {
            prev = head;
            temp = head->next;

            // Move temp to target node
            for (int i = 1; i < delNode; i++) {
                prev = temp;
                temp = temp->next;
            }
        }

        // Target is in right half
        else {
            prev = slow;
            temp = slow->next;

            // Move to target node
            for (int i = mid + 1; i < delNode; i++) {
                prev = temp;
                temp = temp->next;
            }
        }

        // Delete target
        prev->next = temp->next;
        delete temp;

        return head;
    }
};