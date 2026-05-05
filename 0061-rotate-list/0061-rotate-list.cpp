class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if (!head || !head->next || k == 0)
            return head;

        // Step 1: Find length
        ListNode* temp = head;
        int n = 1;
        while (temp->next) {
            temp = temp->next;
            n++;
        }

        // Step 2: Reduce k
        k = k % n;
        if (k == 0)
            return head;

        // Step 3: Make circular
        temp->next = head;

        // Step 4: Move to (n - k)th node
        int steps = n - k;
        ListNode* curr = head;
        for (int i = 1; i < steps; i++) {
            curr = curr->next;
        }

        // Step 5: Break
        ListNode* newHead = curr->next;
        curr->next = NULL;

        return newHead;
    }
};